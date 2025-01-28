/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 14:33:26 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 10:42:14 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	// Testwerte
// 	int test_values[] = {31, 32, 48, 65, 127, 128};
// 	size_t num_tests = sizeof(test_values) / sizeof(test_values[0]);

// 	printf("Testing ft_isprint function:\n");
// 	for (size_t i = 0; i < num_tests; i++) {
// 		int result = ft_isprint(test_values[i]);
// 		printf("ft_isprint(%d) = %d\n", test_values[i], result);
// 	}
// 	return (0);
// }