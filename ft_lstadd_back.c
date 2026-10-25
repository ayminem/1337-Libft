/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 21:56:50 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 22:39:07 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
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

	t_list *current = list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	// Free the list
	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}

	return 0;
} */