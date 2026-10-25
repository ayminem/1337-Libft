/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:57:49 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:20:33 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest || !src)
		return (NULL);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
		while (n--)
			d[n] = s[n];
	return (dest);
}

/* #include <stdio.h>
int main()
{
	char str1[20] = "Hello, World!";
	char str2[20] = "Goodbye!";
	printf("Before memmove: str1 = %s, str2 = %s\n", str1, str2);
	ft_memmove(str1 + 7, str2, 8);
	printf("After memmove: str1 = %s, str2 = %s\n", str1, str2);
	return 0;
} */