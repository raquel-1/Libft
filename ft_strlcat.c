/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:05:11 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/14 12:11:28 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, char *src, size_t size)
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
