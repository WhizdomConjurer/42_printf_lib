/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:09:59 by whi               #+#    #+#             */
/*   Updated: 2025/01/24 13:02:49 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// void	ft_bzero(void *s, size_t n)
// {
// 	unsigned	char	*ptr;

// 	ptr = (unsigned char *)s;
// 	while (n > 0)
// 	{
// 		*ptr = 0;
// 		ptr++;
// 		n--;
// 	}
// }

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, count * size);
	return (mem);
}

// int	main(void)
// {
// 	// Variablen für den Test
// 	size_t	count = 5;
// 	size_t	size = sizeof(int);

// 	// Speicher mit ft_calloc allokieren
// 	int	*array = (int *)ft_calloc(count, size);
// 	if (!array)
// 	{
// 		printf("Speicherallokierung fehlgeschlagen.\n");
// 		return (1);
// 	}

// 	// Überprüfen, ob die Speicherinhalte auf 0 gesetzt wurden
// 	printf("Überprüfung der allokierten Speicherinhalte:\n");
// 	for (size_t i = 0; i < count; i++)
// 	{
// 		printf("array[%zu] = %d\n", i, array[i]);
// 	}

// 	// Speicher freigeben
// 	free(array);

// 	return (0);
// }