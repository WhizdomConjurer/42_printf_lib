/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:43:56 by whi               #+#    #+#             */
/*   Updated: 2025/01/24 15:08:58 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// typedef struct		s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

// t_list	*ft_lstlast(t_list *lst)
// {
// 	if (lst)
// 	{
// 		while (lst->next)
// 			lst = lst->next;
// 	}
// 	return (lst);
// }

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else if (lst && new && *lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

// // Funktion zum Erstellen eines neuen Listenelements
// t_list	*ft_lstnew(void *content)
// {
// 	t_list *new_elem;

// 	new_elem = (t_list *)malloc(sizeof(t_list));
// 	if (!new_elem)
// 		return (NULL);
// 	new_elem->content = content;
// 	new_elem->next = NULL;
// 	return (new_elem);
// }

// // Test-Main-Funktion
// int	main(void)
// {
// 	t_list	*head = NULL;
// 	t_list	*new_elem1;
// 	t_list	*new_elem2;
// 	t_list	*new_elem3;
// 	t_list	*last;

// 	// Erstellen neuer Listenelemente
// 	new_elem1 = ft_lstnew("Element 1");
// 	new_elem2 = ft_lstnew("Element 2");
// 	new_elem3 = ft_lstnew("Element 3");

// 	// Hinzufügen zur Liste
// 	ft_lstadd_back(&head, new_elem1);
// 	ft_lstadd_back(&head, new_elem2);
// 	ft_lstadd_back(&head, new_elem3);

// 	// Überprüfen der Liste
// 	last = ft_lstlast(head);
// 	printf("Last element content: %s\n", (char *)last->content);

// 	// Liste durchgehen und alle Elemente ausgeben
// 	t_list *current = head;
// 	while (current)
// 	{
// 		printf("Element content: %s\n", (char *)current->content);
// 		current = current->next;
// 	}

// 	// Speicher freigeben (optional)
// 	current = head;
// 	while (current)
// 	{
// 		t_list *temp = current;
// 		current = current->next;
// 		free(temp);
// 	}

// 	return (0);
// }