/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:31:49 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:01:38 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;

	str = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*str == ch)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}

/* #include <stdio.h>
int main()
{
	const char *str = "Hello, World!";
	int c = 'W';
	size_t n = 13;
	char *result = (char *)ft_memchr(str, c, n);
	if (result)
		printf("Character '%c' found at position: %ld\n", c, result - str);
	else
		printf("Character '%c' not found in the first %zu bytes.\n", c, n);
	return 0;
} */