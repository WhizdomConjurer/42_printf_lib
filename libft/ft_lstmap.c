/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whi <whi@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 15:54:44 by whi               #+#    #+#             */
/*   Updated: 2025/01/28 11:22:45 by whi              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

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

// t_list	*ft_lstlast(t_list *lst)
// {
// 	if (lst)
// 	{
// 		while (lst->next)
// 			lst = lst->next;
// 	}
// 	return (lst);
// }

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*last;

// 	if (*lst == NULL)
// 		*lst = new;
// 	else if (lst && new && *lst)
// 	{
// 		last = ft_lstlast(*lst);
// 		last->next = new;
// 	}
// }

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new_list;

// 	new_list = malloc(sizeof(t_list));
// 	if (!new_list)
// 		return (0);
// 	new_list->content = content;
// 	new_list->next = NULL;
// 	return (new_list);
// }

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*current;
// 	t_list	*next;

// 	if (!lst || !del)
// 		return;
// 	current = *lst;
// 	while (current != NULL)
// 	{
// 		next = current->next;
// 		ft_lstdelone(current, del);
// 		current = next;
// 	}
// 	*lst = NULL;
// }

// // Beispiel-Löschfunktion
// void del_content(void *content)
// {
// 	free(content); // Annahme: Der Inhalt wurde mit malloc allokiert
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// // Dummy Funktion zur Modifikation von Listenelementen
// void *duplicate_content(void *content)
// {
//     char *str = (char *)content;
//     char *new_str = strdup(str); // Dupliziert den String
//     if (new_str)
//     {
//         for (int i = 0; new_str[i]; i++)
//             new_str[i] = toupper(new_str[i]); 
// Konvertiert in Großbuchstaben
//     }
//     return (void *)new_str;
// }

// int main()
// {
//     // Ursprüngliche Liste erstellen
//     t_list *original = ft_lstnew(strdup("hello"));
//     ft_lstadd_back(&original, ft_lstnew(strdup("world")));
//     ft_lstadd_back(&original, ft_lstnew(strdup("libft")));
//     ft_lstadd_back(&original, ft_lstnew(strdup("test")));

//     printf("Original List:\n");
//     for (t_list *tmp = original; tmp; tmp = tmp->next)
//     {
//         printf("  %s\n", (char *)tmp->content);
//     }

//     // Neue Liste mit ft_lstmap erstellen
//     t_list *new_list = ft_lstmap(original, duplicate_content, del_content);

//     printf("\nMapped List:\n");
//     for (t_list *tmp = new_list; tmp; tmp = tmp->next)
//     {
//         printf("  %s\n", (char *)tmp->content);
//     }

//     // Speicher freigeben
//     ft_lstclear(&original, del_content);
//     ft_lstclear(&new_list, del_content);

//     return 0;
// }