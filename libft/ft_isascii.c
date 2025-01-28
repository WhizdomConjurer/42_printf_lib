/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:04:10 by whi               #+#    #+#             */
/*   Updated: 2025/01/24 14:54:32 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int x)
{
	if (x >= 0 && x <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	// Testfälle
// 	int test_values[] = {-10, 0, 65, 127, 128, 255};
// 	int num_tests = sizeof(test_values) / sizeof(test_values[0]);

// 	printf("Testing ft_isascii:\n");
// 	for (int i = 0; i < num_tests; i++)
// 	{
// 		int value = test_values[i];
// 		int result = ft_isascii(value);
// 		printf("ft_isascii(%d) = %d\n", value, result);
// 	}

// 	return (0);
// }