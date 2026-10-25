/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:41:18 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:49:25 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n_len;

	if (*needle == '\0')
		return ((char *)haystack);
	n_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] != '\0' && i + n_len <= len)
	{
		if (ft_strncmp(haystack + i, needle, n_len) == 0)
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int main()
{
	const char *haystack = "Hello, World!";
	const char *needle = "World";
	size_t len = 12;

	char *result = ft_strnstr(haystack, needle, len);
	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");

	return 0;
} */