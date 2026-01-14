/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:01:17 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/14 12:04:26 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
