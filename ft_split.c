/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 11:41:58 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/19 16:08:05 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char	const *s, char c)
{
	int	i;
	int w;

	i = 0;
	w = 0;
	if (s[i] == c && s[i + 1] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			w++;
			while (s[i + 1] == c)
				i++;
		}
		i++;
	}
	return (w);
}

static int		ft_nextwordlen(char const *s, char c, int i)
{
	int	l;

	l = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c)
	{
		i++;
		l++;
	}
	return (l);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		w;
	int		k;
	char	**words;

	w = ft_count_words(s, c);
	if (!(words = malloc(sizeof(char *) * w)))
		return (0);
	i = 0;
	j = 0;
	while (s[j] == c)
		j++;
	while (i < w)
	{
		words[i] = malloc((sizeof(char) * ft_nextwordlen(s, c, j)) + 1);
		k = 0;
		while (s[j] != c)
		{
			words[i][k] = s[j];
			j++;
			k++;
		}
		words[i][k] = 0;
		while (s[j] == c)
			j++;
		i++;
	}
	return (words);
}
