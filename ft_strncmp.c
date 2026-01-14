/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:17:08 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/14 12:15:32 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
max n compare
0 → strings are equal
< 0 → str1 is less than str2
> 0 → str1 is greater than str2
compare ascii values -> s1 - s2*/
int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
