/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freearray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 09:31:05 by bazuara           #+#    #+#             */
/*   Updated: 2020/10/29 09:53:36 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function fully frees an allocated bidimensional array
*/

void	ft_freearray(char **array)
{
	int i;

	i = 0;
	while (array[i] != '\0')
	{
		free(array[i]);
		i++;
	}
	free(array);
}
