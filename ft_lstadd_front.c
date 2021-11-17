/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 17:13:46 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/17 23:09:27 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

// typedef struct s_list
// {
// 	char			content[22];
// 	struct s_list	*next;
// }	t_list;

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	(*new).next = *lst;
	*lst = new;
}

// # 1. Адрес указателя на первую ссылку списка.  lst это первый квадрат
// #2. Адрес указателя на элемент, который будет добавлен в список. new это квадрат который нужно поспатвить перед lst  

// Добавляет элемент "new" в начало списка.		нужно, чтобы next new вел на квадрат lst

// int	main(void)
// {
// 	t_list	zero;
// 	t_list	*new;
	
// 	t_list	train2;
// 	t_list	train1;
// 	t_list	*train;
	

// 	strcpy(zero.content, "zero");
// 	zero.next = NULL;
// 	new = &zero;

// 	strcpy(train1.content, "vagon1");
// 	train1.next = &train2;
// 	strcpy(train2.content, "vagon2");
// 	train2.next = NULL;
// 	train = &train1;

// 	printf("%s\n", train->content);

// 	ft_lstadd_front(&train, new);		//call function

// 	printf("%s\n", (*train).content);
// 	return (0);
// }
