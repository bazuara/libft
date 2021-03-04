/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freearray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 09:31:05 by bazuara           #+#    #+#             */
/*   Updated: 2021/03/04 13:46:25 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

/*
** This function fully frees an allocated bidimensional array
*/

void	ft_freearray(char **array)
{
	int	i;

	i = 0;
	while (array[i] != '\0')
	{
		free(array[i]);
		i++;
	}
	free(array);
}
