/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:25:21 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/06 11:23:05 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void	*ft_bzero(char *str, int n);
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

#endif
