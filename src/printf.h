/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:16:28 by whi               #+#    #+#             */
/*   Updated: 2025/01/31 16:04:49 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_count
{
	int				count;
	va_list			args;
	const char		*str;
	int				left_align;// Flag: '-'
	int				zero_fill;// Flag: '0'
	int				width;// Breite
	int				precision;// Präzision
	int				alt_form;// Flag: '#'
	int				show_sign;// Flag: '+'
	int				space;// Flag: ' '
	char			conversion;
}					t_count;

void	parse_flags(const char **format, t_flags *flags, va_list args);
void	ft_prozess(t_count main_data, int z);
void	ft_print_char(t_count main_data, int x);
int		ft_printf(const char *str, ...);
void	parse_precision(const char **format, t_flags *flags, va_list args);
void	parse_width_and_flags(const char **format, t_flags *flags,
			va_list args);
void	ft_print_percent(t_count main_data);

#endif