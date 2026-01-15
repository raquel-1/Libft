/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:10:08 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 17:31:51 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int main(void)
{
	char c1 = 'A';
	char c2 = 'Z';
	char c3 = 'a';
	char c4 = '0';
	printf("ft_tolower('%c') = %c\n", c1, ft_tolower(c1));
	printf("ft_tolower('%c') = %c\n", c2, ft_tolower(c2));
	printf("ft_tolower('%c') = %c\n", c3, ft_tolower(c3));
	printf("ft_tolower('%c') = %c\n", c4, ft_tolower(c4));

	return (0);
}*/
