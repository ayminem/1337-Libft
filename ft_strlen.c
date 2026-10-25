/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:44:56 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:49:10 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/* #include <stdio.h>
int main()
{
	const char *str = "Hello, World!";
	size_t length = ft_strlen(str);
	printf("Length of the string: %zu\n", length);
	return 0;
} */