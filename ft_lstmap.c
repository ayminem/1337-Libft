/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 00:08:47 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:01:11 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
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

	void *to_upper(void *content)
	{
		char *str = (char *)content;
		for (int i = 0; str[i]; i++)
			str[i] = ft_toupper(str[i]);
		return (str);
	}

	void del(void *content)
	{
		free(content);
	}

	t_list *mapped_list = ft_lstmap(list, to_upper, del);

	t_list *current = mapped_list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	ft_lstclear(&list, del);
	ft_lstclear(&mapped_list, del);

	return 0;
} */