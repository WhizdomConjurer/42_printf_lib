/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:40:24 by whi               #+#    #+#             */
/*   Updated: 2025/01/24 15:25:08 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// typedef struct		s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// // Hilfsfunktion, um Inhalte einer Liste auszugeben
// void print_content(void *content)
// {
//     printf("%s\n", (char *)content);
// }

// // Hilfsfunktion, um ein neues Listen-Element zu erstellen
// t_list *create_element(void *content)
// {
//     t_list *new_elem = malloc(sizeof(t_list));
//     if (!new_elem)
//         return NULL;
//     new_elem->content = content;
//     new_elem->next = NULL;
//     return new_elem;
// }

// int main(void)
// {
//     // Liste erstellen
//     t_list *elem1 = create_element("Element 1");
//     t_list *elem2 = create_element("Element 2");
//     t_list *elem3 = create_element("Element 3");

//     if (!elem1 || !elem2 || !elem3)
//     {
//         fprintf(stderr, "Speicherallokierung fehlgeschlagen\n");
//         return 1;
//     }

//     // Verkettung der Liste
//     elem1->next = elem2;
//     elem2->next = elem3;

//     // ft_lstiter aufrufen und Inhalte ausgeben
//     printf("Inhalte der Liste:\n");
//     ft_lstiter(elem1, print_content);

//     // Speicher freigeben
//     free(elem1);
//     free(elem2);
//     free(elem3);

//     return 0;
// }