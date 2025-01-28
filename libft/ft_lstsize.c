/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:28:07 by whi               #+#    #+#             */
/*   Updated: 2025/01/24 14:58:51 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct		s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// #include <stdio.h>
// #include <stdlib.h>

// // Hilfsfunktion, um ein neues Listenelement zu erstellen
// t_list *create_new_node(void *content)
// {
// 	t_list *new_node = (t_list *)malloc(sizeof(t_list));
// 	if (!new_node)
// 		return (NULL);
// 	new_node->content = content;
// 	new_node->next = NULL;
// 	return (new_node);
// }

// int main(void)
// {
// 	t_list *head = create_new_node("Erstes Element");
// 	t_list *second = create_new_node("Zweites Element");
// 	t_list *third = create_new_node("Drittes Element");

// 	if (!head || !second || !third)
// 	{
// 		printf("Fehler beim Erstellen der Liste\n");
// 		return (1);
// 	}

// 	// Verknüpfen der Elemente
// 	head->next = second;
// 	second->next = third;

// 	// Test der ft_lstsize Funktion
// 	int size = ft_lstsize(head);
// 	printf("Die Größe der Liste ist: %d\n", size);

// 	// Speicher freigeben
// 	free(third);
// 	free(second);
// 	free(head);

// 	return 0;
// }