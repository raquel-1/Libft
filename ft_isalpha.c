/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:26:09 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 16:05:24 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int	main(void)
{
	char tests[] = {'A', 'z', '5', '!', 'm'};
	int i;

	i = 0;
	while (i < 5)
	{
		if (ft_isalpha(tests[i]))
			printf("'%c' es letra.\n", tests[i]);
		else
			printf("'%c' no es letra.\n", tests[i]);
		i++;
	}
	return (0);
}*/
