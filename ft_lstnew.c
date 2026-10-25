/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:35:51 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:01:18 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/* #include <stdio.h>
int main()
{
	t_list *new_node = ft_lstnew("Hello, World!");
	if (!new_node)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	printf("Node content: %s\n", (char *)new_node->content);
	free(new_node);
	return 0;
} */