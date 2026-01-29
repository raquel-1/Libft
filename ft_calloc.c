/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:13:04 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/29 11:09:36 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h> 
#include <stdlib.h>
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
/*
int	main(void)
{
	size_t n = 5;
	size_t i;
	int *arr1;
	int *arr2;

	arr1 = (int *)ft_calloc(n, sizeof(int));
	if (!arr1)
	{
		printf("ERROR ft_calloc\n");
		return (1);
	}

	printf("ValUES ft_calloc: ");
	i = 0;
	while (i < n)
	{
		printf("%d ", arr1[i]);
		i++;
	}
	printf("\n");

	arr2 = (int *)calloc(n, sizeof(int));
	if (!arr2)
	{
		printf("ERROR calloc\n");
		free(arr1);
		return (1);
	}

	printf("VALUES  CALLOC: ");
	i = 0;
	while (i < n)
	{
		printf("%d ", arr2[i]);
		i++;
	}
	printf("\n");

	free(arr1);
	free(arr2);
	return (0);
}*/
