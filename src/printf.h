/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:16:28 by whi               #+#    #+#             */
/*   Updated: 2025/01/31 16:22:23 by whi              ###   ########.fr       */
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
	int				f_left;// Flag: '-'
	int				f_zero;// Flag: '0'
	int				f_width;// Breite
	int				f_precision;// Präzision
	int				f_hash;// Flag: '#'
	int				f_sign;// Flag: '+'
	int				f_space;// Flag: ' '
	char			conversion;
}					t_count;

void	ft_prozess(t_count main_data, int z);
void	ft_print_char(t_count main_data, int x);
int		ft_printf(const char *str, ...);

#endif