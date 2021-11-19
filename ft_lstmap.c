/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:50:06 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/19 20:24:06 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	while ((*lst).next != NULL)
// 	{
// 		f((*lst).content);
// 		lst = (*lst).next;
// 	}
// 	f((*lst).content);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (new == NULL)
		return (new);
	// if (lst->content != NULL)
	// 	del((*new).content);
	//ft_lstiter(lst, *f);
	while ((*lst).next != NULL)
	{
		if (lst->content != NULL)
			del((*lst).content);
		new->content = f((*lst).content);
		lst = (*lst).next;
		new = lst;
	}
	// f((*lst).content);
	return (new);
}

// int	main(void)
// {
// 	t_list	*new;
// 	t_list	car = {"audi", NULL};
// 	t_list	train5 = {"vagon5", NULL};
// 	t_list	train4 = {"vagon4", &train5};
// 	t_list	train3 = {"vagon3", &train4};
// 	t_list	train2 = {"vagon2", &train3};
// 	t_list	train1 = {"vagon1", &train2};
// 	t_list	*train;

// 	train = &train1;
// 	//train = NULL;
// 	new = &car;
// 	printf("%p\n", train5.next);
// 	ft_lstmap(train, &fun_iter, &fun_del);
// 	printf("%p\n", train5.next);
// 	return (0);
// }
