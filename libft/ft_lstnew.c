/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:10:34 by whi               #+#    #+#             */
/*   Updated: 2025/01/24 14:53:20 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// typedef struct		s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return (0);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}

// #include <stdio.h>
// int main(void)
// {
// 	// Test-Content
// 	char *content = "Hello, world!";

// 	// Erstelle ein neues Listenelement
// 	t_list *node = ft_lstnew(content);

// 	// Teste, ob das Element korrekt erstellt wurde
// 	if (node == NULL)
// 	{
// 		printf("Fehler: Konnte Listenelement nicht erstellen.\n");
// 		return (1);
// 	}

// 	// Gebe die Werte des Listenelements aus
// 	printf("Content: %s\n", (char *)node->content);
// 	printf("Next: %p\n", (void *)node->next);

// 	// Speicher freigeben
// 	free(node);

// 	return 0;
// }