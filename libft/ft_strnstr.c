/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:08:58 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 16:12:37 by whi              ###   ########.fr       */
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

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	if (*s2 == '\0')
		return ((char *)s1);
	len = ft_strlen(s2);
	while (*s1 != '\0' && n-- >= len)
	{
		if (*s1 == *s2 && ft_memcmp(s1, s2, len) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	// Testfälle
// 	const char *haystack = "Hello, this is a simple string!";
// 	const char *needle1 = "simple";
// 	const char *needle2 = "Hello";
// 	const char *needle3 = "notfound";
// 	const char *needle4 = "";
// 	const char *needle5 = "string!";
// 	const char *needle6 = "simple string with extra characters";

// 	// Test 1: Normale Suche
// 	printf("Test 1: %s\n", ft_strnstr(haystack, needle1, 30)); 
// Erwartet: "simple string!"

// 	// Test 2: Suche am Anfang
// 	printf("Test 2: %s\n", ft_strnstr(haystack, needle2, 10)); 
// Erwartet: "Hello, this is a simple string!"

// 	// Test 3: Needle nicht gefunden
// 	printf("Test 3: %s\n", ft_strnstr(haystack, needle3, 30)); 
// Erwartet: (null)

// 	// Test 4: Leeres Needle
// 	printf("Test 4: %s\n", ft_strnstr(haystack, needle4, 30)); 
// Erwartet: "Hello, this is a simple string!"

// 	// Test 5: Needle am Ende
// 	printf("Test 5: %s\n", ft_strnstr(haystack, needle5, 30)); 
// Erwartet: "string!"

// 	// Test 6: Needle zu groß
// 	printf("Test 6: %s\n", ft_strnstr(haystack, needle6, 30)); 
// Erwartet: (null)

// 	// Test 7: Begrenzte Länge
// 	printf("Test 7: %s\n", ft_strnstr(haystack, needle1, 10)); 
// Erwartet: (null)

// 	return 0;
// }