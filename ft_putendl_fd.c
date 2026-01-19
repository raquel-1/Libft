/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:04:17 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/19 11:13:51 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int main(void)
{
	ft_putendl_fd("Helloi 42!", 1);
	ft_putendl_fd("Otra linea", 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd("12345", 1);
	return (0);
}*/
