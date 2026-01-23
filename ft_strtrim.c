/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:04:29 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/23 16:29:31 by raqroca-         ###   ########.fr       */
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
		return (ft_substr(s1, 0, 0));
	return (ft_substr(s1, start, end - start + 1));
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
