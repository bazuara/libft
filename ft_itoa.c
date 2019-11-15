/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 11:16:20 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/15 14:52:10 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int ft_intlen(int n)
{
    if (n < 10)
        return (1);
    else
        return (ft_intlen(n/10) + 1);
}

char    *ft_itoa(int n)
{
    char *s;
    int len;
    int neg;

    neg = 0;

    if (n < 0)
    {
        n = n * - 1;
        neg = 1;
    }

    len = ft_intlen(n);
    if (neg != 0)
    {
        if ((s = malloc(len * sizeof(char) + 2)))
      {
          s[len + 1] = '\0';
          while (len > 0)
          {
             s[len] = n % 10 + '0';
             len--;
             n /= 10;
          }
      }
      s[0] = '-';
    }
    else
      if ((s = malloc(len * sizeof(char) + 1)))
      {
          s[len] = '\0';
          while (len > 0)
          {
             s[len - 1] = n % 10 + '0';
             len--;
             n /= 10;
          }
      }
    return (s);
}
