/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:26:00 by whi               #+#    #+#             */
/*   Updated: 2025/01/27 16:42:46 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// typedef struct		s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
// 	if (!lst || !del)
// 		return;
// 	del(lst->content); 
// 	free(lst);
// }

// void del_content(void *content)
// {
// 	free(content); // Annahme: Der Inhalt wurde mit malloc allokiert
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

// int main(void)
// {
//     // Testliste erstellen
//     t_list *head = malloc(sizeof(t_list));
//     t_list *node2 = malloc(sizeof(t_list));
//     t_list *node3 = malloc(sizeof(t_list));

//     // Inhalte erstellen (z. B. Strings, die mit malloc allokiert wurden)
//     char *content1 = strdup("Node 1");
//     char *content2 = strdup("Node 2");
//     char *content3 = strdup("Node 3");

//     // Liste verlinken und Inhalte zuweisen
//     head->content = content1;
//     head->next = node2;

//     node2->content = content2;
//     node2->next = node3;

//     node3->content = content3;
//     node3->next = NULL;

//     // Liste vor dem Löschen ausgeben
//     printf("Liste vor dem Löschen:\n");
//     t_list *current = head;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }

//     // Liste löschen
//     ft_lstclear(&head, del_content);

//     // Überprüfen, ob die Liste gelöscht wurde
//     if (head == NULL)
//     {
//         printf("\nListe wurde erfolgreich gelöscht.\n");
//     }
//     else
//     {
//         printf("\nListe wurde nicht vollständig gelöscht.\n");
//     }

//     return 0;
// }