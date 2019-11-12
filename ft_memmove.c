/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 13:47:31 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/12 10:58:43 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s1;
	char	*s2;

	if (!dst && !src && len > 0)
		return (0);
	s1 = (char *)src;
	s2 = (char *)dst;
	i = 0;
	while (len >= 0)
	{
		s2[len] = s1[len];
		len--;
	}
	return (dst);
}