/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:50:06 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/21 13:14:18 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp;

	tmp = ft_lstnew(f((*lst).content));
	if (tmp == NULL)
	{
		ft_lstclear(&tmp, *del);
		return (NULL);
	}
	lst = (*lst).next;
	newlst = tmp;
	while ((*lst).next != NULL)
	{
		tmp->next = ft_lstnew(f((*lst).content));
		if (tmp == NULL)
		{
			ft_lstclear(&newlst, *del);
			return (NULL);
		}
		lst = (*lst).next;
		tmp = tmp->next;
	}
	tmp->next = ft_lstnew(f((*lst).content));
	return (newlst);
}
