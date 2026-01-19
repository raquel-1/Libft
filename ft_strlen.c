/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:53:26 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/19 12:03:01 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char *tests[] = {"Hello", "", "42 School", "libft"};
	int i;

	i = 0;
	while (i < 4)
	{
		printf("length of \"%s\" is %d\n",tests[i], ft_strlen(tests[i]));
		i++;
	}
	return (0);
}*/
