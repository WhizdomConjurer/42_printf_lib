/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:36:39 by whi               #+#    #+#             */
/*   Updated: 2025/01/31 17:03:14 by whi              ###   ########.fr       */
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

int	ft_isflag(char c)
{
	if (c == '-' || c == '0' || c == '.' || c == '*'
		|| c == '#' || c == ' ' || c == '+')
		return (1);
	return (0);
}

int	ft_isconversion(char c)
{
	if (c == 'c' || c == 's' || c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == 'p' || c == '%')
		return (1);
	return (0);
}

int	ft_is_flag(char c)
{
	return (ft_isdigit(c) || ft_isflag(c) || ft_istconversion(c));
}

void	ft_parse_flags(t_count main_data, int x)
{
	while (main_data.str[x++] && ft_is_flag(main_data.str[x]))
	{
		if (main_data.str[x] == "-")
			ft_left_flag(main_data);
	}
	
}

int	ft_printf(const char *str, ...)
{
	int		x;
	t_count	main_data;

	x = 0;
	main_data.count = 0;
	va_start(main_data.args, str);
	main_data.str = str;
	ft_int_flags(main_data);
	while (str[x])
	{
		if (str[x] == '%' && str[x + 1] != '\0')
		{
			ft_parse_flags(main_data, x + 1);
			x++;
		}
		else
			ft_print_char(main_data, main_data.str[x]);
		x++;
	}
	return (main_data.count);
}
