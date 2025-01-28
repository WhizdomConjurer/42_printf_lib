/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:14:24 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 20:26:16 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void example_callback(unsigned int index, char *c) 
// {
// 	// Erhöht jedes Zeichen um den Index
// 	*c = *c + index;
// }

// int main() 
// {
// 	char str[] = "Hello, World!";

// 	printf("Original string: %s\n", str);

// 	ft_striteri(str, example_callback);

// 	printf("Modified string: %s\n", str);

// 	return 0;
// }