/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:56:59 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:20:16 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

/* #include <stdio.h>
int main()
{
	char src[] = "Hello, World!";
	char dest[20];

	printf("Before memcpy: %s\n", dest);
	ft_memcpy(dest, src, 13);
	printf("After memcpy: %s\n", dest);

	return 0;
} */