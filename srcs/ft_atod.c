/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 10:03:52 by bazuara           #+#    #+#             */
/*   Updated: 2020/10/16 11:05:24 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

double	ft_atod(char *str)
{
	int		i;
	double	d;
	int		div;
	char	*temp;
	double	res;

	res = 0;
	d = 0;
	i = ft_atoi(str);
	temp = ft_strchr(str, '.');
	if (temp != 0 && temp[0] == '.' && ft_isdigit(temp[1]) == 1)
	{
		div = 10;
		temp++;
		while (ft_isdigit(temp[0]) == 1)
		{
			d += ((double)((temp[0]) - '0') / div);
			div *= 10;
			temp++;
		}
	}
	res = i + d;
	return (res);
}
