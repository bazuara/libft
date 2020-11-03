/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 10:31:20 by bazuara           #+#    #+#             */
/*   Updated: 2020/11/03 13:16:11 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"
#include "../incs/ft_printf.h"

void	ft_error(char *str, int errno)
{
	ft_printf("Error\n %s", str);
	exit(errno);
}