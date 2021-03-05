/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bazuara <bazuara@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 13:33:24 by bazuara           #+#    #+#             */
/*   Updated: 2021/03/05 11:27:09 by bazuara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*done;
	t_list	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	done = NULL;
	while (lst != NULL)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
		{
			ft_lstclear(&done, del);
			return (NULL);
		}
		ft_lstadd_back(&done, tmp);
		lst = lst->next;
	}
	return (done);
}
