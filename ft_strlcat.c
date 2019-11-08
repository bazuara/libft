/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:50:44 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/08 17:03:13 by bazuara          ###   ########.fr       */
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
	while (i < dstsize)
	{
		dst[lend + i] = src[i];
		i++;
	}
	return (lend + i);
}
