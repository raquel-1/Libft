/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 17:35:44 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/26 18:40:56 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int	main(void)
{
	char		*str = "Hola 42";
	t_list *nodo1 = ft_lstnew(str);
	printf("=== Prueba 1: Nodo con string ===\n");
	printf("Contenido: %s\n", (char *)nodo1->content);
	printf("Next apunta a: %p\n", nodo1->next);  // Debería ser NULL
	int			num = 42;
	t_list *nodo2 = ft_lstnew(&num);
	printf("\n=== Prueba 2: Nodo con número ===\n");
	printf("Contenido: %d\n", *(int *)nodo2->content);
	printf("Next apunta a: %p\n", nodo2->next); //null
	t_list		*nodo3 = ft_lstnew(NULL);
	printf("\n=== Prueba 3: Nodo con NULL ===\n");
	printf("Contenido: %p\n", nodo3->content);   // Debería ser NULL
	printf("Next apunta a: %p\n", nodo3->next);  // Debería ser NULL
	free(nodo1);
	free(nodo2);
	free(nodo3);
	return (0);
}*/
