/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 21:31:40 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/21 10:55:43 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	ft_intlen(int n);

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	nb;

	nb = n;
	len = ft_intlen(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		result[0] = '0';
	while (nb > 0)
	{
		result[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (result);
}

static int	ft_intlen(int n)
{
	long	nb;
	int		len;

	nb = n;
	if (nb == 0)
		return (1);
	len = 0;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	char	*s;

	s = ft_itoa(0);
	printf("0 -> \"%s\"\n", s);
	free(s);
	s = ft_itoa(42);
	printf("42 -> \"%s\"\n", s);
	free(s);
	s = ft_itoa(-42);
	printf("-42 -> \"%s\"\n", s);
	free(s);
	s = ft_itoa(2147483647);
	printf("INT_MAX -> \"%s\"\n", s);
	free(s);
	s = ft_itoa(-2147483648);
	printf("INT_MIN -> \"%s\"\n", s);
	free(s);
	return (0);
}*/
