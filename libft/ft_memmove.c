/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 20:20:26 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 20:27:41 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = n;
	if (dest > src)
	{
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else if (dest < src)
		ft_memcpy(dest, src, n);
	return (d);
}

// #include <stdio.h>
// #include <string.h> // Für Vergleich mit Standard memmove

// int main() {
//     char buffer1[20] = "Hello, World!";
//     char buffer2[20];

//     // Test ohne Überlappung
//     ft_memmove(buffer2, buffer1, 13);
//     printf("Ohne Überlappung:\n");
//     printf("Quelle: %s\n", buffer1);
//     printf("Ziel:   %s\n", buffer2);

//     // Test mit Überlappung
//     printf("\nMit Überlappung:\n");
//     ft_memmove(buffer1 + 7, buffer1, 6); 
// Verschiebt "Hello" innerhalb des Puffers
//     printf("Quelle/Ziel: %s\n", buffer1);

//     return 0;
// }