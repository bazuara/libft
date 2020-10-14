/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 13:20:25 by bazuara           #+#    #+#             */
/*   Updated: 2020/08/05 08:42:54 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			j;
	char			*dst;

	i = 0;
	j = 0;
	if (!(dst = ft_calloc(len + 1, sizeof(char))))
		return (NULL);
	while (s[i] && j < len)
	{
		if (start == 0 && s[i] == '\n')
		{
			dst[j] = '\0';
			return (dst);
		}
		else if (i >= start && j < len)
			dst[j++] = s[i];
		i++;
	}
	if (start != 0)
		free((void *)s);
	dst[j] = '\0';
	return (dst);
}
