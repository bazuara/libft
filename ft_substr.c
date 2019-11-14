/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 13:20:25 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/14 13:00:34 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
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