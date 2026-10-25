/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:38:55 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:01:47 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
int main()
{
	const char *str1 = "Hello, World!";
	const char *str2 = "Hello, Wxrld!";
	size_t n = 13;
	int result = ft_memcmp(str1, str2, n);
	if (result < 0)
		printf("'%s' is less than '%s'\n", str1, str2);
	else if (result > 0)
		printf("'%s' is greater than '%s'\n", str1, str2);
	else
		printf("'%s' is equal to '%s'\n", str1, str2);
	return 0;
} */