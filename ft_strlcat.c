/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:05:11 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/19 12:22:59 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	j;

	len_dest = 0;
	len_src = 0;
	j = 0;
	while (len_dest < size && dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size <= len_dest)
		return (size + len_src);
	while (src[j] != '\0' && (len_dest + j) < (size - 1))
	{
		dest[len_dest + j] = src[j];
		j++;
	}
	dest[len_dest + j] = '\0';
	return (len_dest + len_src);
}
/*
int main(void)
{
	char dest1[20] = "Hello, ";
	char src[] = "World!";
	size_t result_ft;
	
    result_ft = ft_strlcat(dest1, src, sizeof(dest1));
	printf("FT Resulting string: %s\n", dest1);
    printf("FT Return value: %zu\n", result_ft);

	char small1[10] = "Hi, ";
	result_ft = ft_strlcat(small1, src, sizeof(small1));
	printf("FT Small buffer string: %s\n", small1);
	printf("FT Small buffer return: %zu\n", result_ft);

	return (0);
}*/
