/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 13:57:21 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/13 19:08:04 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *haystack, char *needle, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] && (i < len))
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && (i + j < len) && (needle[j]))
			j++;
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
(needle[j])  ==>  needle[j] != '\0' //we haven't reached the end of needle
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0') // return str if toFind is empty
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);  //Returns a pointer to the beginning of toFind
		}
		i++;
	}
	return (NULL);
}
*/
