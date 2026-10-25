/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 14:52:18 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:46:56 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/* #include <stdio.h>
int main()
{
	const char *str = "Hello, World!";
	int c = 'W';
	char *result = ft_strchr(str, c);
	if (result)
		printf("Character '%c' found at position: %ld\n", c, result - str);
	else
		printf("Character '%c' not found in the string.\n", c);
	return 0;
} */