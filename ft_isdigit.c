/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:33:18 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 16:11:31 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int	main(void)
{
	char tests[] = {'0', 'z', '5', '!', 'm'};
	int i;

	i = 0;
	while (i < 5)
	{
		if (ft_isdigit(tests[i]))
			printf("'%c' is a digit.\n", tests[i]);
		else
			printf("'%c' is not a digit.\n", tests[i]);
		i++;
	}
	return (0);
}*/
