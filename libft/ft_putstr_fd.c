/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:24:04 by whi               #+#    #+#             */
/*   Updated: 2025/01/22 14:07:28 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	x;

	x = 0;
	if (s)
	{
		while (s[x] != '\0')
		{
			ft_putchar_fd(s[x], fd);
			x++;
		}
	}
}
