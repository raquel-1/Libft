/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:48:22 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/14 17:20:43 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
max n compare
0 → are equal
< 0 → s1 is less than s2
> 0 → s1 is greater than s2*/
int	ft_memcmp(void *s1, void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	size_t			i;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	i = 0;
	if (n == (size_t)0)
		return (0);
	while (i < n)
	{
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
		i++;
	}
	return (0);
}
