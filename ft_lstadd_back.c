/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:50:50 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/20 22:20:59 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// t_list	*ft_lstlast(t_list *lst)
// {
// 	while ((*lst).next != NULL)
// 		lst = lst->next;
// 	return (lst);
// }

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = *lst;
		tmp = ft_lstlast(*lst);
		(*tmp).next = new;
	}
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

// 	//train = &train1;
// 	train = NULL;
// 	new = &car;
// 	printf("%p\n", train5.next);
// 	ft_lstadd_back(&train, new);
// 	printf("%p\n", train5.next);
// 	return (0);
// }
