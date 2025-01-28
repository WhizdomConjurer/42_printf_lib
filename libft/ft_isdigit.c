/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:19:04 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 20:17:43 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int x)
{
	if (x > 47 && x < 58)
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void) {
// 	// Testfälle
// 	int test_values[] = {'0', '5', '9', 'a', 'z', '@', '1', '!', ' '};
// 	int num_tests = sizeof(test_values) / sizeof(test_values[0]);

// 	printf("Testing ft_isdigit:\n");
// 	for (int i = 0; i < num_tests; i++) {
// 		int result = ft_isdigit(test_values[i]);
// 		printf("Input: '%c' (%d) -> Output: %d\n", 
//test_values[i], test_values[i], result);
// 	}

// 	return 0;
// }