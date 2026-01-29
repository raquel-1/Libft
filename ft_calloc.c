/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raromar <raromar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:13:04 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/29 21:38:37 by raromar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;

	tmp = malloc(nmemb * size);
	if (tmp == NULL)
		return (tmp);
	ft_bzero(tmp, size * nmemb);
	return (tmp);
}
