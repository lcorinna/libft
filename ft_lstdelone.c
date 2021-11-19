/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:59:26 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/19 18:41:43 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// void	fun_del(void *tmp)
// {
// 	tmp = NULL;
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	tmp = (*lst).next;
	del((*lst).content);
	free(lst);
	lst = tmp;
}

// int	main(void)
// {
// 	t_list	train5 = {"vagon5", NULL};
// 	t_list	train4 = {"vagon4", &train5};
// 	t_list	train3 = {"vagon3", &train4};
// 	t_list	train2 = {"vagon2", &train3};
// 	t_list	train1 = {"vagon1", &train2};
// 	t_list	*train;

// 	train = &train1;
// 	printf("%p\n", train1.next);
// 	printf("%p\n", (*train).next);
// 	ft_lstdelone(train, &fun_del);
// 	printf("%p\n", train1.next);
// 	return (0);
// }
