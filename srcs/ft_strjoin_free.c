/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 09:11:47 by bazuara           #+#    #+#             */
/*   Updated: 2021/03/08 12:52:18 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin_free(char *str1, char *str2, int i)
{
	char	*temp;

	temp = ft_strjoin(str1, str2);
	if (i == 1)
		free(str1);
	else if (i == 2)
		free(str2);
	if (i == 3)
	{
		free(str1);
		free(str2);
	}
	return (temp);
}
