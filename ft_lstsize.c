/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:11:55 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/19 13:20:22 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (lst == NULL)
		return (0);
	while ((*lst).next != NULL)
	{
		lst = (*lst).next;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	t_list	train5 = {"vagon5", NULL};
// 	t_list	train4 = {"vagon4", &train5};
// 	t_list	train3 = {"vagon3", &train4};
// 	t_list	train2 = {"vagon2", &train3};
// 	t_list	train1 = {"vagon1", &train2};
// 	t_list	*new = NULL;

// 	printf("%d\n", ft_lstsize(new));
// 	return (0);
// }
