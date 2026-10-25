/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:28:37 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:49:21 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
int main()
{
	const char *str1 = "Hello, World!";
	const char *str2 = "Hello, C!";
	size_t n = 7;

	int result = ft_strncmp(str1, str2, n);
	if (result < 0)
		printf("'%s' is less than '%s'\n", str1, str2);
	else if (result > 0)
		printf("'%s' is greater than '%s'\n", str1, str2);
	else
		printf("'%s' is equal to '%s'\n", str1, str2);

	return 0;
} */