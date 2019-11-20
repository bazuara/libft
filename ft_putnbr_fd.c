/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:33:29 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/20 19:41:40 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			temp;
	unsigned int	c;

	if (n < 0)
	{
		c = -n;
		write(fd, "-", 1);
	}
	else
		c = n;
	if (c >= 10)
	{
		ft_putnbr_fd(c / 10, fd);
	}
	temp = (c % 10) + '0';
	write(fd, &temp, 1);
}

int main(void) {

  ft_putnbr_fd(-2147483648, 2);
  return 0;
}
