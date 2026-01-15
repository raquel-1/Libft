/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 12:39:15 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/15 16:18:23 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int main(void)
{
    char tests[] = {'A', 'z', '5', '!', ' ', '9'};
    int i;

    i = 0;
    while (i < 6)
    {
        if (ft_isalnum(tests[i]))
            printf("'%c' is alphanumeric.\n", tests[i]);
        else
            printf("'%c' is not alphanumeric.\n", tests[i]);
        i++;
    }
    return (0);
}*/
