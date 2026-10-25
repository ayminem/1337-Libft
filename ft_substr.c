/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:15:19 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:49:42 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

/* #include <stdio.h>
int main()
{
	char *s = "Hello, World!";
	unsigned int start = 7;
	size_t len = 5;
	char *result = ft_substr(s, start, len);
	if (result)
	{
		printf("Substring: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return 0;
} */