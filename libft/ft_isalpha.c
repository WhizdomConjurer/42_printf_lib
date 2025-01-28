/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:11:44 by whi               #+#    #+#             */
/*   Updated: 2025/01/24 14:54:34 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int x)
{
	if ((x > 64 && x < 91) || (x > 96 && x < 123))
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char test_chars[] = {'A', 'z', '1', '%', 'm', 'Z'};
// 	int i;

// 	printf("Testing ft_isalpha:\n");
// 	for (i = 0; i < 6; i++) {
// 		char c = test_chars[i];
// 		int result = ft_isalpha(c);
// 		printf("Character: '%c' -> ft_isalpha: %d\n", c, result);
// 	}

// 	return 0;
// }