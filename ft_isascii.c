/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:44:41 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 16:18:50 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	int tests[] = {0, 65, 127, 128, -1};
	int i;

	i = 0;
	while (i < 5)
	{
		if (ft_isascii(tests[i]))
			printf("%d is ASCII.\n", tests[i]);
		else
			printf("%d is not ASCII.\n", tests[i]);
		i++;
	}
	return (0);
}*/
