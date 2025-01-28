/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:49:13 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 10:58:44 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*src1;
	const char	*src2;

	src1 = s1;
	src2 = s2;
	i = 0;
	if (src1 == 0 && src2 == 0)
		return (0);
	while (i < n)
	{
		if (src1[i] != src2[i])
			return ((unsigned char)src1[i] - (unsigned char)src2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h> // Für printf

// int main() {
//     char arr1[] = "Hello, World!";
//     char arr2[] = "Hello, World!";
//     char arr3[] = "Hello, Earth!";

//     size_t n = 13; // Anzahl der zu vergleichenden Bytes
//     int result1 = ft_memcmp(arr1, arr2, n);
//     int result2 = ft_memcmp(arr1, arr3, n);
//     int result3 = ft_memcmp(arr3, arr1, n);

//     printf("Result1 (arr1 vs arr2): %d\n", result1); // Erwartet: 0
//     printf("Result2 (arr1 vs arr3): %d\n", result2);
// Erwartet: > 0 (Unterschied in 'W' vs 'E')
//     printf("Result3 (arr3 vs arr1): %d\n", result3); 
// Erwartet: < 0 (Unterschied in 'E' vs 'W')

//     return 0;
// }