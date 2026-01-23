/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:31:32 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/23 16:01:35 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	uc;
	int				i;

	uc = (unsigned char)c;
	i = 0;
	while ((unsigned char)s[i] != uc)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)&s[i]);
}
/*
int	main(void)
{
	char str[] = "Hello, World!";
	char c1 = 'W';
	char c2 = 'z';
	char c3 = '\0';
	char *res_ft;
	char *res_lib;

	res_ft = ft_strchr(str, c1);
	res_lib = strchr(str, c1);
	printf("ft_strchr('%c') = %s\n", c1, res_ft);
	printf("strchr('%c')    = %s\n", c1, res_lib);
	res_ft = ft_strchr(str, c2);
	res_lib = strchr(str, c2);
	printf("ft_strchr('%c') = %s\n", c2, res_ft);
	printf("strchr('%c')    = %s\n", c2, res_lib);
	res_ft = ft_strchr(str, c3);
	res_lib = strchr(str, c3);
	printf("ft_strchr('\\0') = %s\n", res_ft);
	printf("strchr('\\0')    = %s\n", res_lib);

	return (0);
}*/
