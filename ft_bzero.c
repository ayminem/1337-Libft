/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:48:01 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 22:37:41 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* #include <stdio.h>
int main(void)
{
	char str[50] = "Hello, World!";
	printf("Before bzero: %s\n", str);
	ft_bzero(str, 5);
	printf("After bzero: %s\n", str);
	return 0;
} */