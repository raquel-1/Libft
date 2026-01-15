/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:13:56 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 18:27:37 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	long	n;
	int		sig;
	int		i;

	n = 0;
	sig = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * sig);
}
/*
int	main(void)
{
	char	str[] = "   -12345";
	int		res_ft;
	int		res_std;

	res_ft = ft_atoi(str);
	res_std = atoi(str);
	printf("ft_atoi: %d\n", res_ft);
	printf("atoi   : %d\n", res_std);
	return (0);
}*/
