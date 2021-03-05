/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 13:20:25 by bazuara           #+#    #+#             */
/*   Updated: 2021/03/05 11:20:18 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	new = malloc(sizeof(char));
	if (start >= len || !s || len == 0)
	{
		new[0] = '\0';
		return (new);
	}
	if ((new = malloc((len * sizeof(char)) + 1)))
	{
		while (i < len)
		{
			new[i] = s[(int)i + start];
			i++;
		}
		new[i] = '\0';
	}
	return (new);
}
