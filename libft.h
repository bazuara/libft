/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:25:21 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/08 13:25:01 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

void	ft_bzero(void *str, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(char *str, int c, int n);
char	*ft_strchr(char *str, int c);
int		ft_strlen(char *s);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strcmp(char *str1, char *str2);
char	*ft_strrchr(char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, int n);
int		ft_strlcpy(char *dst, char *src, int size);
void	*ft_memcpy(void *dst, void *src, int n);
void	*ft_memccpy(char *dst, char *src, int c, int n);
void	*ft_memmove(char *dst, char *src, int len);
void	*ft_memchr(char *s, int c, int n);

#endif
