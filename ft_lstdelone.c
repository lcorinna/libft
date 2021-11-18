/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:59:26 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/18 15:51:07 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	fun_del(void *tmp)
// {
// 	free(tmp);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*new;

	new = lst;
	del(lst);
}

// int	main(void)
// {
// 	t_list	audi = {"A8", NULL};
// 	t_list	bmw = {"Х6", &audi};

// 	ft_lstdelone(&bmw, &fun_del);
// 	return (0);
// }
