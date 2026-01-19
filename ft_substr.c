/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:22:25 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/19 16:05:38 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		len = 0;
	if (len > (size_t)ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char *s = "hola mundo";
	char *sub;
	sub = ft_substr(s, 0, 4);
	printf("case 1: \"%s\"\n", sub);//hola
	free(sub);
	sub = ft_substr(s, 5, 5);
	printf("case 2: \"%s\"\n", sub);//mundo
	free(sub);
	sub = ft_substr(s, 5, 20);
	printf("case 3: \"%s\"\n", sub);//mundo
	free(sub);
	sub = ft_substr(s, 50, 10);
	printf("case 4: \"%s\"\n", sub);//""
	free(sub);
	return (0);
}*/
