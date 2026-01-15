/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:01:17 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 17:09:06 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (src[i] && (i < (size - 1)))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
int main(void)
{
	char src[] = "42 School";
	char dest[20];
	size_t size;

	size = 10;
	ft_strlcpy(dest, src, size);
	printf("ft_strlcpy: %s (length returned: %zu)\n", dest,
	ft_strlcpy(dest, src, size));

	size = 0;
	printf("ft_strlcpy with size 0: length returned: %zu\n",
		ft_strlcpy(dest, src, size));
	return (0);
}*/
