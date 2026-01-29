/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:18:27 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 16:42:33 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return ((void *)s);
}
/*
int	main(void)
{
	char str1[20];
	char str2[20];

	memset(str1, 'X', 10);
	ft_memset(str2, 'X', 10);
	str1[10] = '\0';
	str2[10] = '\0';

	printf("memset   : %s\n", str1);
	printf("ft_memset: %s\n", str2);
	return (0);
}*/