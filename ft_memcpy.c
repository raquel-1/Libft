/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:47:44 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 12:37:06 by raqroca-         ###   ########.fr       */
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
