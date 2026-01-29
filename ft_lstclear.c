/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:01:22 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/27 16:26:46 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*p_next;

	if (!*lst)
	{
		return ;
	}
	temp = *lst;
	while (temp)
	{
		p_next = temp->next;
		del(temp->content);
		free(temp);
		temp = p_next;
	}
	*lst = NULL;
}
