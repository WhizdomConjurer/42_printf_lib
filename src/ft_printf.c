/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:19:29 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 16:22:51 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_char(t_count main_data, int x)
{
	write(1, &x, 1);
	main_data.count++;
}

void	ft_prozess(t_count main_data, int z)
{
	t_flags		flags;
	const char	*format;

	format = &main_data.str[z];
	parse_flags(&format, &flags, main_data.args);
	if (main_data.str[z] == 'c')
		ft_print_char(main_data, va_arg(main_data.args, int));
	else if (main_data.str[z] == '%')
		ft_print_percent(main_data);
	else if (main_data.str[z] == 's')
		ft_printstr(main_data, va_arg(main_data.args, char *), flags);
	else if (main_data.str[z] == 'p')
		ft_print_ptr(main_data, va_arg(main_data.args, unsigned long long),
			flags);
	else if (main_data.str[z] == 'd' || main_data.str[z] == 'i')
		ft_print_nbr(main_data, va_arg(main_data.args, int), flags);
	else if (main_data.str[z] == 'x' || main_data.str[z] == 'X')
		ft_print_hexa(main_data, va_arg(main_data.args, unsigned int),
			main_data.str[z]);
	else if (main_data.str[z] == 'u')
		ft_print_unsignet_int(main_data, va_arg(main_data.args, unsigned int));
	return ;
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
