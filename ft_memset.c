/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:23:47 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/04 13:36:58 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(char *str, int c, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
