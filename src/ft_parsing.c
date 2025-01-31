/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:57:52 by whi               #+#    #+#             */
/*   Updated: 2025/01/30 20:26:33 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	parse_width_and_flags(const char **format, t_flags *flags, va_list args)
{
	while (**format == '-' || **format == '0' || **format == '#'
		|| **format == '+' || **format == ' ')
	{
		if (**format == '-')
			flags->left_align = 1;
		if (**format == '0')
			flags->zero_fill = 1;
		if (**format == '#')
			flags->alt_form = 1;
		if (**format == '+')
			flags->show_sign = 1;
		if (**format == ' ')
			flags->space = 1;
		(*format)++;
	}
	if (**format >= '0' && **format <= '9')
	{
		while (**format >= '0' && **format <= '9')
		{
			flags->width = flags->width * 10 + (**format - '0');
			(*format)++;
		}
	}
	else if (**format == '*')
	{
		flags->width = va_arg(args, int);
		(*format)++;
	}
}

void	parse_precision(const char **format, t_flags *flags, va_list args)
{
	if (**format == '.')
	{
		(*format)++;
		flags->precision = 0;
		if (**format >= '0' && **format <= '9')
		{
			while (**format >= '0' && **format <= '9')
			{
				flags->precision = flags->precision * 10 + (**format - '0');
				(*format)++;
			}
		}
		else if (**format == '*')
		{
			flags->precision = va_arg(args, int);
			(*format)++;
		}
	}
}

void	parse_flags(const char **format, t_flags *flags, va_list args)
{
	flags->left_align = 0;
	flags->zero_fill = 0;
	flags->width = 0;
	flags->precision = -1;
	flags->alt_form = 0;
	flags->show_sign = 0;
	flags->space = 0;
	parse_width_and_flags(format, flags, args);
	parse_precision(format, flags, args);
}
