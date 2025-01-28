/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:48:24 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 20:16:58 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

// #include <stdio.h>

// int main() {
// 	char buffer[10] = "Hello";

// 	ft_bzero(buffer, 5); // Setzt die ersten 5 Bytes von `buffer` auf 0

// 	for (int i = 0; i < 10; i++) {
// 		printf("%d ", buffer[i]); // Ausgabe zeigt 0 für die ersten 5 Elemente
// 	}
// 	return 0;
// }