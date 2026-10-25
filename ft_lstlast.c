/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 21:11:50 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:01:04 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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

	t_list *last_node = ft_lstlast(list);
	if (last_node)
		printf("Last node content: %s\n", (char *)last_node->content);
	else
		printf("The list is empty.\n");

	// Free the list
	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}

	return 0;
} */