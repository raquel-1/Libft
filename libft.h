/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqroca- <raqroca-@student.42.madrid.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 21:07:26 by raqroca-          #+#    #+#             */
/*   Updated: 2026/01/14 10:32:05 by raqroca-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_strlen(char *str);
char			*ft_strchr(char *s, int c);
char			*ft_strrchr(char *s, int c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(char *haystack, char *needle, unsigned int len);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_atoi(char *str);
char			ft_toupper(char c);
char			ft_tolower(char c);

#endif
