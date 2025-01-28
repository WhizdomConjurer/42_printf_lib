/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:07:08 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 11:29:25 by whi              ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	if (!s)
		return (NULL);
	str = s + ft_strlen(s);
	while (str >= s)
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*test_str = "Hello, World!";
// 	char		c = 'o';
// 	char		c_not_found = 'z';
// 	char		*result;

// 	// Test case 1: Character exists in the string
// 	printf("Testing with string: \"%s\" and character: '%c'\n", test_str, c);
// 	result = ft_strrchr(test_str, c);
// 	if (result)
// 		printf("Last occurrence of '%c': \"%s\"\n", c, result);
// 	else
// 		printf("Character '%c' not found in string.\n", c);

// 	// Test case 2: Character does not exist in the string
// 	printf(
//"\nTesting with string: \"%s\" and character: '%c'\n", test_str, c_not_found);
// 	result = ft_strrchr(test_str, c_not_found);
// 	if (result)
// 		printf("Last occurrence of '%c': \"%s\"\n", c_not_found, result);
// 	else
// 		printf("Character '%c' not found in string.\n", c_not_found);

// 	// Test case 3: Empty string
// 	const char	*empty_str = "";
// 	printf("\nTesting with empty string and character: '%c'\n", c);
// 	result = ft_strrchr(empty_str, c);
// 	if (result)
// 		printf("Last occurrence of '%c': \"%s\"\n", c, result);
// 	else
// 		printf("Character '%c' not found in empty string.\n", c);

// 	// Test case 4: Character is null terminator
// 	printf(
//"\nTesting with string: \"%s\" and null terminator '\\0'\n", test_str);
// 	result = ft_strrchr(test_str, '\0');
// 	if (result)
// 		printf("Last occurrence of '\\0': \"%s\"\n", result);
// 	else
// 		printf("Null terminator not found (unexpected).\n");

// 	return (0);
// }
