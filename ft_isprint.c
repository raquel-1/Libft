/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:46:51 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 16:22:06 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main(void)
{
	int tests[] = {31, 32, 65, 126, 127};
	int i;

	i = 0;
	while (i < 5)
	{
		if (ft_isprint(tests[i]))
			printf("%d is printable.\n", tests[i]);
		else
			printf("%d is not printable.\n", tests[i]);
		i++;
	}
	return (0);
}*/
