/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:28:56 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:20:50 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (s);
}

/* #include <stdio.h>
int main()
{
	char str[50] = "Hello, World!";
	printf("Before memset: %s\n", str);
	ft_memset(str, '*', 5);
	printf("After memset: %s\n", str);
	return 0;
} */