/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:04:29 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/23 12:46:32 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

static int	is_in_set(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;
	size_t	len;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	if (end > 0)
		end--;
	while (end >= start && is_in_set(s1[end], set))
		end--;
	if (end < start)
		len = 0;
	else
		len = end - start + 1;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < (len))
	{
		result[i] = s1[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
