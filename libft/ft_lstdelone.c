/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:09:42 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 10:34:28 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// typedef struct		s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// // Beispiel-Löschfunktion
// void del_content(void *content)
// {
// 	free(content); // Annahme: Der Inhalt wurde mit malloc allokiert
// }

// int main(void)
// {
// 	// Erstelle einen neuen Listenknoten
// 	t_list *node = (t_list *)malloc(sizeof(t_list));
// 	if (!node)
// 		return (1); // Fehler beim Allokieren

// 	// Allokiere und setze den Inhalt
// 	char *content = strdup("Hello, World!");
// 	if (!content)
// 	{
// 		free(node);
// 		return (1); // Fehler beim Allokieren
// 	}
// 	node->content = content;
// 	node->next = NULL;

// 	// Testausgabe vor dem Löschen
// 	printf("Before deletion: %s\n", (char *)node->content);

// 	// Rufe ft_lstdelone auf
// 	ft_lstdelone(node, del_content);

// 	// Testausgabe nach dem Löschen (Zeiger sollte ungültig sein)
// 	printf("After deletion: Node deleted successfully.\n");

// 	return (0);
// }