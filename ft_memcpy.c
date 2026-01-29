/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:47:44 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/23 15:56:29 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	size_t			i;

	if (!dest && !src && n > 0)
		return (NULL);
	i = 0;
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "42 School";
	char dest1[20];
	char dest2[20];

	memcpy(dest1, src, 9);
	ft_memcpy(dest2, src, 9);
	printf("memcpy   : %s\n", dest1);
	printf("ft_memcpy: %s\n", dest2);
	return (0);
}*/