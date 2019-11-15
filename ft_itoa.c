/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:54:16 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/15 17:47:08 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strnew(int i)
{
	char	*str;
	if (!(str = malloc(i * sizeof(char))))
		return (0);
	else
		return (str);
}

static	int ft_intlen(unsigned int n)
{
	if (n < 10)
		return (1);
	else
		return (ft_intlen(n/10) + 1);
}

char		*ft_itoa(int nbr)
{
	char *s;
	int len;
	int neg;
	unsigned int n;

	neg = 0;
	if (nbr < 0)
	{
		n = -nbr;
		neg = 1;
	}
	else
		n = nbr;
	len = ft_intlen(n);
	if (neg != 0)
		len++;
	s = ft_strnew(len + 1);
	s[len + 1] = '\0';
	if (neg != 0)
		s[0] = '-';
	while (neg < len)
	{
		s[len - 1] = n % 10 + '0';
		len--;
		n /= 10;
	}
	return (s);
}
