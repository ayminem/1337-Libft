/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 19:32:57 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 22:39:32 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/* #include <stdio.h>
int main()
{
	t_list *list = NULL;
	t_list *new_node1 = ft_lstnew("First");
	t_list *new_node2 = ft_lstnew("Second");
	t_list *new_node3 = ft_lstnew("Third");

	ft_lstadd_back(&list, new_node1);
	ft_lstadd_back(&list, new_node2);
	ft_lstadd_back(&list, new_node3);

	// Print the list before clearing
	t_list *current = list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	// Clear the list
	ft_lstclear(&list, free);

	// Check if the list is cleared
	if (list == NULL)
		printf("List cleared successfully.\n");
	else
		printf("List not cleared.\n");

	return 0;
} */