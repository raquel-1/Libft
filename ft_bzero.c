/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:36:40 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 16:43:24 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char	stra[] = "Hello World";
	char	strb[] = "Hello World";
	char	str1[] = "Hello World";
	char	str2[] = "Hello World";
	int		i;

	bzero(stra, 5);
	ft_bzero(strb, 5);
	printf("bzero   : %s\n", stra);
	printf("ft_bzero: %s\n", strb);

	bzero(str1, 5);
	ft_bzero(str2, 5);
	i = 0;
	printf("bzero   : ");
	while (i < 11)
	{
		printf("%c", str1[i] ? str1[i] : '.');
		i++;
	}
	printf("\n");
	i = 0;
	printf("ft_bzero: ");
	while (i < 11)
	{
		printf("%c", str2[i] ? str2[i] : '.');
		i++;
	}
	printf("\n");
	return (0);
}*/
