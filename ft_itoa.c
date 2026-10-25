/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 20:35:39 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 22:38:53 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long num)
{
	int	len;

	len = 0;
	if (num <= 0)
	{
		len = 1;
		num = -num;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;

	num = n;
	len = ft_numlen(num);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
		num = -num;
	while (len--)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/* #include <stdio.h>
int main()
{
	int n = -12345;
	char *str = ft_itoa(n);
	if (str)
	{
		printf("The string representation of %d is: %s\n", n, str);
		free(str);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return 0;
} */