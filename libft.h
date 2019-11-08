/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:25:21 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/08 16:58:05 by bazuara          ###   ########.fr       */
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
size_t	ft_strlen(const char *s);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strcmp(char *str1, char *str2);
char	*ft_strrchr(char *str, int c);
int		ft_strncmp(const char *s1, const char *s2, int n);
void	*ft_memcpy(void *dst, void *src, int n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	*ft_memccpy(char *dst, char *src, int c, int n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

#endif
