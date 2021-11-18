/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:13:46 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/18 20:31:20 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	(*new).next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	zero = {"zero", NULL};
// 	t_list	*new;
// 	t_list	train2 = {"vagon2", NULL};
// 	t_list	train1 = {"vagon1", &train2};
// 	t_list	*train;

// 	new = &zero;
// 	train = &train1;
// 	printf("%s\n", train->content);
// 	ft_lstadd_front(&train, new);
// 	printf("%s\n", (*train).content);
// 	return (0);
// }
