/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymissao <aymissao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:08:03 by aymissao          #+#    #+#             */
/*   Updated: 2026/10/24 23:46:35 by aymissao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**ft_free_split(char **result, size_t j)
{
	while (j > 0)
	{
		j--;
		free(result[j]);
	}
	free(result);
	return (NULL);
}

static char	**ft_fill_split(char **result, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[j] = ft_substr(s, start, i - start);
			if (!result[j])
				return (ft_free_split(result, j));
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (ft_fill_split(result, s, c));
}

/* #include <stdio.h>
int main()
{
	char *str = "Hello,World,This,Is,A,Test";
	char delimiter = ',';
	char **result = ft_split(str, delimiter);
	if (!result)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	while (*result)
	{
		printf("%s\n", *result);
		free(*result);
		result++;
	}
	return 0;
} */