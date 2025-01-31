/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:30:09 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 16:35:33 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_print_char(t_count main_data, char c, t_flags flags)
{
	int	padding;
	int	i;

	i = 0;
	if (flags.width > 1)
		padding = flags.width - 1;
	else
		padding = 0;
	if (!flags.left_align)
	{
		while (i < padding)
		{
			write(1, " ", 1);
			i++;
		}
	}
	write(1, &c, 1);
	main_data.count++;
	if (flags.left_align)
	{
		i = 0;
		while (i < padding)
		{
			write(1, " ", 1);
			i++;
		}
	}
	main_data.count += padding;
}
