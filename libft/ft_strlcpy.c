/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 16:27:23 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 11:38:34 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

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

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (dstsize > 0)
	{
		while (i < (dstsize - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	// Test für ft_strlen
// 	const char *test_str1 = "Hallo Welt!";
// 	const char *test_str2 = "";
// 	const char *test_str3 = NULL;

// 	printf("Test ft_strlen:\n");
// 	printf("Länge von '%s': %zu\n", test_str1, ft_strlen(test_str1));
// 	printf("Länge von leerem String: %zu\n", ft_strlen(test_str2));
// 	printf("Länge von NULL: %zu\n\n", ft_strlen(test_str3));

// 	// Test für ft_strlcpy
// 	char src[] = "Beispieltext";
// 	char dst[20];
// 	size_t dstsize = sizeof(dst);

// 	printf("Test ft_strlcpy:\n");
// 	size_t copied = ft_strlcpy(dst, src, dstsize);
// 	printf("Quelle: '%s'\n", src);
// 	printf("Kopie: '%s'\n", dst);
// 	printf("Zurückgegebene Länge: %zu\n", copied);

// 	// Weitere Tests mit kleineren Zielgrößen
// 	char small_dst[5];
// 	copied = ft_strlcpy(small_dst, src, sizeof(small_dst));
// 	printf("\nTest mit kleinerem Zielpuffer:\n");
// 	printf("Quelle: '%s'\n", src);
// 	printf("Kopie: '%s'\n", small_dst);
// 	printf("Zurückgegebene Länge: %zu\n", copied);

// 	return 0;
// }
