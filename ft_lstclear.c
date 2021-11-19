/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:11:38 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/19 19:47:34 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// void	fun_del(void *tmp)
// {
// 	tmp = NULL;
// }

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
// 		t_list	*tmp;

// 		tmp = (*lst).next;
// 		del((*lst).content);
// 		free(lst);
// 		lst = tmp;
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while ((*lst))
	{
		next = (*lst)->next;
		ft_lstdelone((*lst), (*del));
		*lst = next;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list	train5 = {"vagon5", NULL};
// 	t_list	train4 = {"vagon4", &train5};
// 	t_list	train3 = {"vagon3", &train4};
// 	t_list	train2 = {"vagon2", &train3};
// 	t_list	train1 = {"vagon1", &train2};
// 	t_list	*train;
// 	t_list	**all_train;

// 	train = &train1;
// 	all_train = &train;
// 	printf("%p\n", all_train);
// 	ft_lstclear(&train, &fun_del);
// 	printf("%p\n", all_train);
// 	return (0);
// }
