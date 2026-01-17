/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:50:53 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/17 17:56:11 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = (char *)malloc(ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*original;
	char	*copy;

	original = "Hello 42!";
	copy = ft_strdup(original);

	if (!copy)
	{
		printf("MEMORY ERROR\n");
		return (1);
	}

	printf("original: %s\n", original);
	printf("copy   : %s\n", copy);

	free(copy);
	return (0);
}*/
