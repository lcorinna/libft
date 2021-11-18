/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:30:41 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/18 15:49:23 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	fun_rep(void *tmp)
// {
// 	free(tmp);
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*spare;

	spare = lst;
	while ((*spare).next != NULL)
	{
		(*spare).content = f;
		spare = (*spare).next;
	}
}

// int	main(void)
// {
// 	t_list	audi = {"A8", NULL};
// 	t_list	bmw = {"Х6", &audi};

// 	ft_lstclear(&bmw, &fun_rep);
// 	return (0);
// }
