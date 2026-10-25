/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 02:47:34 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:42:24 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	if (!str)
		return ;
	write(fd, str, ft_strlen(str));
	free(str);
}

/* #include <stdio.h>
int main()
{
	int n = -12345;
	int fd = 1; // Standard output
	ft_putnbr_fd(n, fd);
	return 0;
} */