/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:19:13 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 17:01:40 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>
/*
 Visually, nothing happens when it overlaps because 
we are going from back to front. */
void	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	if (p_dest < p_src)
	{
		i = 0;
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			p_dest[i] = p_src[i];
	}
	return (dest);
}
/*
int	main(void)
{
	char str1[20] = "123456789";
	char str2[20] = "123456789";
	memmove(str1 + 2, str1, 5);
	ft_memmove(str2 + 2, str2, 5);
	printf("memmove   : %s\n", str1);
	printf("ft_memmove: %s\n", str2);

	char str3[20] = "abcdef";
	char str4[20] = "abcdef";
	memmove(str3, str3 + 2, 4);
	ft_memmove(str4, str4 + 2, 4);
	printf("memmove overlap   : %s\n", str3);
	printf("ft_memmove overlap: %s\n", str4);
	if (ft_memmove(NULL, NULL, 5) == NULL)
		printf("ft_memmove with NULL pointers returned NULL\n");
	else
		printf("ft_memmove with NULL pointers NOT return NULL \n");
	return (0);
}*/
