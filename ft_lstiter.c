/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:30:41 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/19 19:18:27 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// void	fun_iter(void *tmp)
// {
// 	tmp = NULL;
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while ((*lst).next != NULL)
	{
		f((*lst).content);
		lst = (*lst).next;
	}
	f((*lst).content);
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
// 	// printf("%p\n", train1.next);
// 	// printf("%p\n", (*train).next);
// 	ft_lstiter(train, &fun_iter);
// 	//printf("%p\n", train1.next);
// 	return (0);
// }
