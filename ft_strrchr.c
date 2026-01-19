/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 18:39:06 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/19 12:26:35 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
/*
int main(void)
{
    char str[] = "Hello, World!";
    char c1 = 'o';
    char c2 = 'z';
    char c3 = '\0';
    char *res_ft;
    char *res_lib;

    //haracter that exists multiple times
    res_ft = ft_strrchr(str, c1);
    res_lib = strrchr(str, c1);
    printf("ft_strrchr('%c') = %s\n", c1, res_ft);
    printf("strrchr('%c')    = %s\n", c1, res_lib);

    //character that does not exis
    res_ft = ft_strrchr(str, c2);
    res_lib = strrchr(str, c2);
    printf("ft_strrchr('%c') = %s\n", c2, res_ft);
    printf("strrchr('%c')    = %s\n", c2, res_lib);

    //NULL
    res_ft = ft_strrchr(str, c3);
    res_lib = strrchr(str, c3);
    printf("ft_strrchr('\\0') = %s\n", res_ft);
    printf("strrchr('\\0')    = %s\n", res_lib);

    return (0);
}*/
