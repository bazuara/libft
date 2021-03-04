/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 11:19:28 by bazuara           #+#    #+#             */
/*   Updated: 2021/03/04 12:41:20 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	pointer = malloc(size * count);
	if (sizeof(pointer) == (size * count))
		return (0);
	ft_bzero(pointer, size * count);
	return (pointer);
}
