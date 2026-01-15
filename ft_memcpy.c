/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:47:44 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 16:49:59 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
/*
dest == (void *)0 && src == (void *)0     ==    !dest && !src*/
void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
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

	if (ft_memcpy(NULL, NULL, 5) == NULL)
		printf("ft_memcpy with NULL pointers returned NULL \n");
	else
		printf("ft_memcpy with NULL pointers NOT return NULL\n");

	return (0);
}*/
