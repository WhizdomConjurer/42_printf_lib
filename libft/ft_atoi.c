/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:09:35 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 19:45:54 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	neg;

	neg = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * neg);
}

// #include <stdio.h>

// int	main (void)
// {
// 	// Testfälle
// 	const char *test1 = "42";
// 	const char *test2 = "   -123";
// 	const char *test3 = "0";
// 	const char *test4 = "+456";
// 	const char *test5 = "   789abc";
// 	const char *test6 = "-2147483648"; // Kleinster Wert eines 32-Bit-Integer
// 	const char *test7 = "2147483647";  // Größter Wert eines 32-Bit-Integer
// 	const char *test8 = "   +42  84"; // Nur der erste Teil ist relevant
// 	const char *test9 = "abc123";     // Kein gültiger Integer

// 	// Tests ausgeben
// 	printf("Test 1: '%s' -> %d\n", test1, ft_atoi(test1));
// 	printf("Test 2: '%s' -> %d\n", test2, ft_atoi(test2));
// 	printf("Test 3: '%s' -> %d\n", test3, ft_atoi(test3));
// 	printf("Test 4: '%s' -> %d\n", test4, ft_atoi(test4));
// 	printf("Test 5: '%s' -> %d\n", test5, ft_atoi(test5));
// 	printf("Test 6: '%s' -> %d\n", test6, ft_atoi(test6));
// 	printf("Test 7: '%s' -> %d\n", test7, ft_atoi(test7));
// 	printf("Test 8: '%s' -> %d\n", test8, ft_atoi(test8));
// 	printf("Test 9: '%s' -> %d\n", test9, ft_atoi(test9));

// 	return (0);
// }