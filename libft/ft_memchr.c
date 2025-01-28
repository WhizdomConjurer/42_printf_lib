/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:47:04 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 20:33:53 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch;
	size_t				i;

	ptr = (const unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == ch)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}

// int main() 
// {
//     char buffer[] = "Hello, World!";
//     char target = 'o';
//     size_t n = 10;

//     // Unsere Implementierung testen
//     char *result = (char *)ft_memchr(buffer, target, n);

//     if (result != NULL) {
//         printf(
//"Das Zeichen '%c' wurde gefunden bei Position: 
//%ld\n", target, result - buffer);
//     } else {
//         printf(
//"Das Zeichen '%c' wurde in den ersten %zu Bytes nicht gefunden.
//\n", target, n);
//     }

//     return 0;
// }