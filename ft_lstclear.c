/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:11:38 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/18 15:39:56 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	fun_del(void *tmp)
// {
// 	free(tmp);
// }

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
// 	t_list	*new;

// 	new = lst;
// 	del(lst);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*spare;

	spare = *lst;
	while ((*spare).next != NULL)
	{
		ft_lstdelone(spare, del);
		spare = spare -> next;
	}
	(**lst).next = NULL;
}

// int	main(void)
// {
// 	t_list	audi = {"A8", NULL};
// 	t_list	bmw = {"Х6", &audi};

// 	ft_lstclear(&bmw, &fun_del);
// 	return (0);
// }
