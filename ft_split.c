/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:41:54 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/22 12:47:37 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c);
static void	ft_free_split(char **split, int count);
static char	*ft_extract_word(const char *s, int start, int len);
static int	fill_split(char **split, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	if (!fill_split(split, s, c))
		return (NULL);
	return (split);
}

static int	fill_split(char **split, char const *s, char c)
{
	int	y;
	int	z;
	int	start;

	y = 0;
	z = 0;
	while (s[y])
	{
		if (s[y] != c)
		{
			start = y++;
			while (s[y] && s[y] != c)
				y++;
			split[z] = ft_extract_word(s, start, y - start);
			if (!split[z++])
				return (ft_free_split(split, z - 1), 0);
		}
		else
			y++;
	}
	split[z] = NULL;
	return (1);
}

static char	*ft_extract_word(const char *s, int start, int len)
{
	char	*word;
	int		i;

	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	ft_free_split(char **split, int count)
{
	while (count > 0)
		free(split[--count]);
	free(split);
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
int	main(void)
{
	char	**res;
	int		i;
	char	*str = "--Ge eks-for-Geeks-is-a-computer-science-por-tal-";
	char	delim = '-';

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
