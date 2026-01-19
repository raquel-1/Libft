/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:08:31 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/19 16:46:13 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

int	ft_toupper(int c)
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
	int c4 = 48;
	printf("ft_toupper('%c') = %c\n", c1, ft_toupper(c1));
	printf("ft_toupper('%c') = %c\n", c2, ft_toupper(c2));
	printf("ft_toupper('%c') = %c\n", c3, ft_toupper(c3));
	printf("ft_toupper('%c') = %c\n", c4, ft_toupper(c4));
	return (0);
}*/
