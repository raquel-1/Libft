/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:07:37 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/20 11:36:14 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	concat = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!concat)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		concat[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = 0;
	return (concat);
}
/*
int	main(void)
{
	char *s1 = "Hola ";
	char *s2 = "mundo!";
	char *result;

	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("ft_strjoin: \"%s\"\n", result);
		free(result);
	}
	else
		printf("Error memory\n");
	return 0;
}*/
