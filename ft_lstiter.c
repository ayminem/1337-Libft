/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 23:54:42 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 22:39:44 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
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

	void print_content(void *content)
	{
		printf("%s\n", (char *)content);
	}

	ft_lstiter(list, print_content);

	// Free the list
	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}

	return 0;
} */