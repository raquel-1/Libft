/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:04:29 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/23 15:44:27 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

static int	is_in_set(char c, char const *set);
static char	*ft_copy_trim(char const *s1, size_t start, size_t len);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

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
	return (ft_copy_trim(s1, start, len));
}

static char	*ft_copy_trim(char const *s1, size_t start, size_t len)
{
	char	*result;
	size_t	i;

	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
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
/*
int	main(void)
{
	char	*test;

	test = ft_strtrim("   hello world   ", " ");
	printf("Test 1: '%s'\n", test);//hello world
	free(test);
	test = ft_strtrim("xxxhello worldxxx", "x");
	printf("Test 2: '%s'\n", test);//hello world
    free(test);
	test = ft_strtrim("   ", " ");
	printf("Test 3: '%s'\n", test);//empty
	free(test);
	test = ft_strtrim("hello", " ");
	printf("Test 4: '%s'\n", test);//hello
	free(test);
	test = ft_strtrim("ababcabaXYZcababa", "ab");
	printf("Test 5: '%s'\n", test);//cXYZc
	free(test);
	test = ft_strtrim("", "x");
	printf("Test 6: '%s'\n", test);//empty
	free(test);
	return (0);
}*/
