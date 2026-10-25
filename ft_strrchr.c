/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 17:09:33 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:49:29 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last);
}

/* #include <stdio.h>
int main()
{
	const char *str = "Hello, World!";
	int ch = 'o';
	char *result = ft_strrchr(str, ch);
	if (result)
		printf("Last occurrence of '%c': %s\n", ch, result);
	else
		printf("Character '%c' not found.\n", ch);
	return 0;
} */