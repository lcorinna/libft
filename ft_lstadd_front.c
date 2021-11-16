/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:13:46 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/16 17:59:16 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	(*new).next = (**lst).next;
}

// int	main(void)
// {
// 	t_list	som;
// 	t_list	what;

// 	ft_lstadde_front(som, whatever);
// 	return (0);
// }
