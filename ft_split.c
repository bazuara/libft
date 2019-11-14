/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 17:17:44 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/14 17:49:17 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		numwords(char *str, char c)
{
	int		i;

	i = 0;
	while (*str)
	{
		while (*str && (*str  = c))
			str++;
		if (*str && *str != c)
		{
			i++;
			while (*str && (*str != c))
				str++;
		}
	}
	return (i);
}

char	*malloc_word(char *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && (str[i] != c))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char c)
{
	int		words;
	char	**tab;
	int		i;

	words = numwords(str, c);
	if(!(tab = (char **)malloc(sizeof(char*) * (words + 1))) || !str )
			return (0);
	i = 0;
	while (*str)
	{
	while (*str && (*str == c))
			str++;
		if (*str && *str != c)
		{
			tab[i] = malloc_word(str, c);
			i++;
			while (*str && *str != c)
				str++;
		}
	}
	tab[i] = NULL;
	return (tab);
}
