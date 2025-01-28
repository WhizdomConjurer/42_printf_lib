/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 12:25:00 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 11:34:09 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// void    *ft_memchr(const void *s, int c, size_t n)
// {
// 	const	unsigned	char	*ptr;
// 	unsigned	char	ch;
// 	size_t	i;

// 	ptr = (const unsigned char *)s;
// 	ch = (unsigned char)c;
// 	i = 0;

// 	while (i < n)
// 	{
// 	if (ptr[i] == ch)
// 		return (void *)(ptr + i);

// 	i++;
// 	}

// 	return (NULL);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = ft_strlen(src);
	while (dst_len < dsize && dst[dst_len] != '\0')
		dst_len++;
	if (dsize <= dst_len)
		return (dsize + src_len);
	i = 0;
	while (dst_len + i < dsize - 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < dsize)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int main()
// {
// 	char buffer[20] = "Hello";
// 	const char *to_add = " World!";
// 	size_t result;

// 	printf("Before: '%s'\n", buffer);

// 	// Teste strlcat
// 	result = ft_strlcat(buffer, to_add, sizeof(buffer));

// 	printf("After: '%s'\n", buffer);
// 	printf("Total length (would be): %zu\n", result);

// 	return 0;
// }