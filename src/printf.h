/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:16:28 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 14:27:07 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_flags
{
	int	left_align;// Flag: '-'
	int	zero_fill;// Flag: '0'
	int	width;// Breite
	int	precision;// Präzision
	int	alt_form;// Flag: '#'
	int	show_sign;// Flag: '+'
	int	space;// Flag: ' '
}		t_flags;

typedef struct s_count
{
	int				count;
	va_list			args;
	const char		*str;
}					t_count;

#endif