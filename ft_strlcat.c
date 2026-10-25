/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 21:39:38 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:47:35 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	j = 0;
	while (dst[j] != '\0' && j < size)
		j++;
	if (j >= size)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && (j + i) < (size - 1))
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (j + src_len);
}

/* #include <stdio.h>
int main()
{
	char dest[20] = "Hello, ";
	const char *src = "World!";
	size_t size = 20;

	size_t result = ft_strlcat(dest, src, size);
	printf("Result: %zu\n", result);
	printf("Destination: %s\n", dest);

	return 0;
} */