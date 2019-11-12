/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:04:20 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/12 15:56:36 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t c;

	i = 0;

	while (haystack[i] != '\0')
	{
		c = 0;
		while (needle[i] == haystack[i] && c < len)
		{
			i++;
			c++;
		}
		if (c == len)
			return ((char *)&haystack[i - c]);
		i++;
	}
	return (0);
}
