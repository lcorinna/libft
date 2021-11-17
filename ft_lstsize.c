/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 23:11:55 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/17 23:51:22 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while ((*lst).next != NULL)
	{
		lst = (*lst).next;
		i++;
	}
	return (0);
}

// struct list
// {
//   int field; // поле данных
//   struct list *ptr; // указатель на следующий элемент
// };

// void listprint(list *lst)
// {
//   struct list *p;
//   p = lst;
//   do {
//     printf("%d ", p->field); // вывод значения элемента p
//     p = p->ptr; // переход к следующему узлу
//   } while (p != NULL);
// }