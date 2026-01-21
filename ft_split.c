/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:41:54 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/21 19:38:02 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

static int	ft_count_words(const char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		y;
	int		z;
	int		start;
	int		len;
	char	*word;
	int		w;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	y = 0;
	z = 0;
	while (s[y] != '\0')
	{
		if (s[y] == c)
			y++;
		else
		{
			start = y;
			while (s[y] != '\0' && s[y] != c)
				y++;
			len = y - start;
			word = (char *)malloc(len + 1);
			if (!word)
			{
				while (z > 0)
					free(split[--z]);
				free(split);
				return (NULL);
			}
			w = 0;
			while (w < len)
			{
				word[w] = s[start + w];
				w++;
			}
			word[len] = '\0';
			split[z] = word;
			z++;
		}
	}
	split[z] = NULL;
	return (split);
}

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}
/*
int main(void)
{
	char **res;
	int i;
	char *str = "--Geeks-for-Geeks-is-a-computer-science-portal";
	char delim = '-';

	res = ft_split(str, delim);
	if (!res)
	{
		printf("ERROR MEMORY\n");
		return (1);
	}
	i = 0;
	while (res[i])
	{
		printf("WORD %d: %s\n", i, res[i]);
		i++;
	}
	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}*/
