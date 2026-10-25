/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 02:34:14 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:47:20 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* #include <stdio.h>
int main()
{
	char str[] = "Hello, World!";
	void (*func)(unsigned int, char *) = &my_function;

	ft_striteri(str, func);
	printf("Modified string: %s\n", str);
	return 0;
} */