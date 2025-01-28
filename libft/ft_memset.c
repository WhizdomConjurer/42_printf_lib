/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:39:40 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 17:22:34 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	unsigned char	*c;
	unsigned int	x;

	c = (unsigned char *)ptr;
	x = 0;
	while (x < count)
	{
		c[x++] = value;
	}
	ptr = (void *)c;
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	// Test-Daten vorbereiten
// 	char buffer[20] = "Hello, World!";

// 	// Vorheriger Zustand anzeigen
// 	printf("Vor memset: %s\n", buffer);

// 	// ft_memset aufrufen
// 	ft_memset(buffer + 7, 'x', 5);

// 	// Nachheriger Zustand anzeigen
// 	printf("Nach memset: %s\n", buffer);

// 	// Original memset vergleichen
// 	char buffer2[20] = "Hello, World!";
// 	memset(buffer2 + 7, 'x', 5);
// 	printf("Original memset: %s\n", buffer2);

// 	// Erfolg überprüfen
// 	if (strcmp(buffer, buffer2) == 0)
// 		printf("Test bestanden: ft_memset funktioniert korrekt.\n");
// 	else
// 		printf("Test fehlgeschlagen: ft_memset hat einen Fehler.\n");

// 	return 0;
// }