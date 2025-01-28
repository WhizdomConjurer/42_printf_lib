/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:27:16 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 20:23:44 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!size || dest == src)
		return (dest);
	while (size--)
		*d++ = *s++;
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char src[] = "Hallo, Welt!";
//     char dest[20];

//     ft_memcpy(dest, src, strlen(src) + 1); 
// +1 für das Nullterminierungszeichen

//     printf("Quelle: %s\n", src);
//     printf("Ziel: %s\n", dest);

//     return 0;
// }