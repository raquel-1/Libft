/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:41:54 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/21 12:54:41 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int  ft_count_words(char *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s || !c)
		return (NULL);
	split = (char *)malloc(ft_count_words(s, c) + 1);
	if (!split)
		return (NULL);
}

static int	ft_count_words(char *s, char c)
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
