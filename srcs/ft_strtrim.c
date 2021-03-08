/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:56:33 by bazuara           #+#    #+#             */
/*   Updated: 2021/03/08 13:09:02 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*snew;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr((char *)set, s1[i]) != NULL)
		i++;
	len = ft_strlen(&s1[i]);
	if (len != 0)
		while (s1[i + len - 1]
			&& ft_strchr((char *)set, s1[i + len - 1]) != NULL)
			len--;
	snew = (char *)malloc(sizeof(char) * (len + 1));
	if (!snew)
		return (NULL);
	ft_memcpy(snew, &s1[i], len);
	snew[len] = '\0';
	return (snew);
}
