/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:48:22 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/19 12:38:00 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

/*
max n compare
0 → are equal
< 0 → s1 is less than s2
> 0 → s1 is greater than s2*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	size_t			i;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	i = 0;
	if (n == (size_t)0)
		return (0);
	while (i < n)
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char    str1[] = "Hola, mundo!";
    char    str2[] = "Hola, mundo!";
    int     res_ft;
    int     res_std;
    size_t  n;
    n = sizeof(str1);//n bytes to compare
	res_ft = ft_memcmp(str1, str2, n);
	res_std = memcmp(str1, str2, n);
	printf("ft_memcmp: %d\n", res_ft);
	printf("memcmp   : %d\n", res_std);

	return (0);
}*/
