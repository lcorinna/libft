/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:50:06 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/18 18:56:18 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
}

// int	main(void)
// {
// 	t_list	audi = {"A8", NULL};
// 	t_list	bmw = {"Х6", &audi};

// 	ft_lstdelone(&bmw, &fun_del);
// 	return (0);
// }