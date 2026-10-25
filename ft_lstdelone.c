/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 21:58:54 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 22:39:38 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

/* #include <stdio.h>
int main()
{
	t_list *node = ft_lstnew("Hello, World!");
	if (!node)
	{
		printf("Memory allocation failed\n");
		return 1;
	}

	printf("Before deletion: %s\n", (char *)node->content);
	ft_lstdelone(node, free);
	node = NULL; // Set the pointer to NULL after deletion

	if (node == NULL)
		printf("Node deleted successfully.\n");
	else
		printf("Node not deleted.\n");

	return 0;
} */