/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:08:31 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 17:29:42 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int main(void)
{
	char c1 = 'a';
	char c2 = 'z';
	char c3 = 'A';
	char c4 = '0';
	printf("ft_toupper('%c') = %c\n", c1, ft_toupper(c1));
	printf("ft_toupper('%c') = %c\n", c2, ft_toupper(c2));
	printf("ft_toupper('%c') = %c\n", c3, ft_toupper(c3));
	printf("ft_toupper('%c') = %c\n", c4, ft_toupper(c4));

	return (0);
}*/
