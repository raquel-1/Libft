/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:12:41 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/19 17:07:06 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while(s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
void to_upper_iter(unsigned int i, char *c)
{
	(void)i;
    if (*c >= 'a' && *c <= 'z')
        *c = ft_toupper(*c);
}

int main(void)
{
    char str1[] = "hola mundo";
    char str2[] = "42 barcelona";

    printf("Original str1: %s\n", str1);
    ft_striteri(str1, to_upper_iter);
    printf("Modificado str1: %s\n", str1);

    printf("Original str2: %s\n", str2);
    ft_striteri(str2, to_upper_iter);
    printf("Modificado str2: %s\n", str2);

    return 0;
}*/
