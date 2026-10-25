/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:07:41 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 22:38:38 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

/* #include <stdio.h>
int main()
{
	size_t nmemb = 5;
	size_t size = sizeof(int);
	int *arr = (int *)ft_calloc(nmemb, size);
	if (arr == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	for (size_t i = 0; i < nmemb; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;
} */