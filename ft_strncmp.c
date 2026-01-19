/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:17:08 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/19 12:45:35 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

/*
max n compare
0 → strings are equal
< 0 → str1 is less than str2
> 0 → str1 is greater than str2
compare ascii values -> s1 - s2*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	size_t n;

	n = 5;
	printf("cmp1 = %d\n", ft_strncmp("Hello", "Hello", n));
	printf("cmp2 = %d\n", ft_strncmp("Hello", "Hellp", n));

	n = 3;
	printf("cmp3 = %d\n", ft_strncmp("Hello", "Hellp", n));

	n = 5;
	printf("cmp4 = %d\n", ft_strncmp("Hello", "Hel", n));

	n = 0;
	printf("cmp5 = %d\n", ft_strncmp("Hello", "Hellp", n));

	return (0);	
}*/
