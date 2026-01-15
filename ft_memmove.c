/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:19:13 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 13:23:15 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		while (i++ < n)
		{
			p_dest[i] = p_src[i];
		}
	}
	else
	{
		i = n - 1;
		while (i-- > 0)
		{
			p_dest[i] = p_src[i];
		}
	}
	return (dest);
}
