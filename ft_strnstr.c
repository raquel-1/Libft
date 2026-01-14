/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:57:21 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/14 11:56:44 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] && (i < len))
	{
		j = 0;
		while ((i + j < len) && needle[j] && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
