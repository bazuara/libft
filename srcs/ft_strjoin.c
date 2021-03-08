/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:35:53 by bazuara           #+#    #+#             */
/*   Updated: 2021/03/08 12:50:32 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s1 || !s2)
		return (0);
	new = malloc(((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char)) + 1);
	if (new)
	{
		while (i < ft_strlen(s1))
		{
			new[i] = s1[i];
			i++;
		}
		j = 0;
		while (j < ft_strlen(s2))
		{
			new[i + j] = s2[j];
			j++;
		}
		new[i + j] = '\0';
	}
	return (new);
}
