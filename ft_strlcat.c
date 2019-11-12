/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:50:44 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/12 12:29:27 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lens;
	size_t	lend;
	size_t	i;

	lens = ft_strlen(src);
	lend = ft_strlen(dst);
	i = 0;
	if (dstsize == 0)
		return (0);
	if (dstsize < i)
		lens += dstsize;
	else 
		lens += i;
	while (src[i] != '\0' && lend < dstsize - 1 && dst != src)
	{
		dst[lend] = src[i];
		lend++;
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + i);
}
