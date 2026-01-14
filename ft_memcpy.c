/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:47:44 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/14 16:40:57 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
dest == (void *)0 && src == (void *)0     ==    !dest && !src*/
void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	size_t			i;

	i = 0;
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	if (dst == (void *)0 && src == (void *)0)
		return (dest);
	while (i < n)
	{
		p_dest[i] = p_src[i];
		i++;
	}
	return (dest);
}
