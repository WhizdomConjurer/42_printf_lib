/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:36:39 by whi               #+#    #+#             */
/*   Updated: 2025/01/31 16:27:20 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_int_flags(t_count main_data)
{
	main_data.f_left = 0;
	main_data.f_zero = 0;
	main_data.f_width = 0;
	main_data.f_precision = -1;
	main_data.f_hash = 0;
	main_data.f_sign = 0;
	main_data.f_space = 0;
	main_data.conversion = 0;
}

int	ft_printf(const char *str, ...)
{
	int		x;
	t_count	main_data;

	x = 0;
	main_data.count = 0;
	va_start(main_data.args, str);
	main_data.str = str;
	while (str[x])
	{
		if (str[x] == '%')
		{
			ft_prozess(main_data, x + 1);
			x++;
		}
		else
			ft_print_char(main_data, main_data.str[x]);
		x++;
	}
	return (main_data.count);
}