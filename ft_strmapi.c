/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 01:17:31 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:49:15 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	new_str = (char *)malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* #include <stdio.h>
int main()
{
	char *s = "Hello, World!";
	char (*f)(unsigned int, char) = &my_function;
	char *result = ft_strmapi(s, f);
	if (result)
	{
		printf("Result: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return 0;
} */