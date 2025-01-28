/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:08:16 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 20:23:01 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// size_t	ft_strlen(const char *str)
// {
// 	int	len;

// 	if (!str || !*str)
// 		return (0);
// 	len = 0;
// 	while (str[len] != '\0')
// 		len++;
// 	return (len);
// }

// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	size_t	i;
// 	const	char	*src1;
// 	const	char	*src2;

// 	src1 = s1;
// 	src2 = s2;
// 	i = 0;

// 	if (src1 == 0 && src2 == 0)
// 		return (0);
// 	while (i < n)
// 	{
// 		if (src1[i] != src2[i])
// 			return ((unsigned char)src1[i] - (unsigned char)src2[i]);
// 		i++;
// 	}
// 	return (0);
// }

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n > (size_t)ft_strlen(s1))
		n = (size_t)ft_strlen(s1) + 1;
	if (n > (size_t)ft_strlen(s2))
		n = (size_t)ft_strlen(s2) + 1;
	return (ft_memcmp(s1, s2, n));
}

// #include <stdio.h>

// int main(void)
// {
//     const char *s1 = "Hello, World!";
//     const char *s2 = "Hello, Universe!";
//     size_t n;

//     // Testfall 1: n kleiner als der erste Unterschied
//     n = 7;
//     printf(
//"Test 1: 
//ft_strncmp(\"%s\", \"%s\", %zu) = %d\n", s1, s2, n, ft_strncmp(s1, s2, n));

//     // Testfall 2: n größer als der erste Unterschied
//     n = 20;
//     printf(
//"Test 2: 
//ft_strncmp(\"%s\", \"%s\", %zu) = %d\n", s1, s2, n, ft_strncmp(s1, s2, n));

//     // Testfall 3: n = 0
//     n = 0;
//     printf(
//"Test 3: 
//ft_strncmp(\"%s\", \"%s\", %zu) = %d\n", s1, s2, n, ft_strncmp(s1, s2, n));

//     // Testfall 4: Strings sind gleich
//     const char *s3 = "Identical";
//     const char *s4 = "Identical";
//     n = 9;
//     printf(
//"Test 4: 
//ft_strncmp(\"%s\", \"%s\", %zu) = %d\n", s3, s4, n, ft_strncmp(s3, s4, n));

//     // Testfall 5: Einer der Strings ist leer
//     const char *s5 = "";
//     const char *s6 = "Non-empty";
//     n = 5;
//     printf(
//"Test 5: 
//ft_strncmp(\"%s\", \"%s\", %zu) = %d\n", s5, s6, n, ft_strncmp(s5, s6, n));

//     // Testfall 6: Beide Strings sind leer
//     const char *s7 = "";
//     const char *s8 = "";
//     n = 3;
//     printf(
//"Test 6: 
//ft_strncmp(\"%s\", \"%s\", %zu) = %d\n", s7, s8, n, ft_strncmp(s7, s8, n));

//     return 0;
// }