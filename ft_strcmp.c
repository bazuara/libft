/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:50:29 by bazuara           #+#    #+#             */
/*   Updated: 2019/11/05 17:39:48 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *str1, const char *str2)
{
	int count;

	count = 0;
	while (str1[count] != '\0' && str2[count] != '\0' &&
			str1[count] == str2[count])
		count++;
	return ((unsigned char)str1[count] - (unsigned char)str2[count]);
}
