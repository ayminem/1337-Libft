/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:09:57 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:47:02 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(s1);
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, s1, len + 1);
	return (dup);
}

/* #include <stdio.h>
int main()
{
	const char *original = "Hello, World!";
	char *duplicate = ft_strdup(original);
	if (duplicate == NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	printf("Original: %s\n", original);
	printf("Duplicate: %s\n", duplicate);
	free(duplicate);
	return 0;
} */