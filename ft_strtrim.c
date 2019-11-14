/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:56:33 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/14 16:51:10 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*new;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && strchr(set, s1[i]) != NULL)
		i++;
	len = strlen(&s1[i]);
	if (len != 0)
		while (s1[i + len - 1]
				&& strchr(set, s1[i + len - 1]) != NULL)
			len--;
	if ((new = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	new = strncpy(new, &s1[i], len);
	new[len] = '\0';
	return (new);
}
