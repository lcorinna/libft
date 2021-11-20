/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:50:06 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/20 21:22:58 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*f_element;

// 	f_element = (t_list *) malloc(sizeof(t_list));
// 	if (f_element == NULL)
// 		return (f_element);
// 	(*f_element).content = content;
// 	f_element->next = NULL;
// 	return (f_element);
// }

// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	while ((*lst).next != NULL)
// 	{
// 		f((*lst).content);
// 		lst = (*lst).next;
// 	}
// 	f((*lst).content);
// }

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
// 	t_list	*tmp;

// 	tmp = (*lst).next;
// 	del((*lst).content);
// 	free(lst);
// 	lst = tmp;
// }

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*next;

// 	while ((*lst))
// 	{
// 		next = (*lst)->next;
// 		ft_lstdelone((*lst), (*del));
// 		*lst = next;
// 	}
// 	*lst = NULL;
// }

// void	fun_del(void *tmp)
// {
// 	tmp = NULL;
// }

// void	*fun_f2(void *tmp)
// {
// 	t_list	*f_element;

// 	f_element = (t_list *) malloc(sizeof(t_list));
// 	if (f_element == NULL)
// 		return (f_element);
// 	(*f_element).content = "done";
// 	f_element->next = NULL;
// 	return (f_element);
// }

// void	*fun_f(void *content)
// {
// 	(void)content;
// 	return ("OK !");
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp;

	// tmp = (t_list *) malloc(sizeof(ft_lstsize(lst)));
	// if (tmp == NULL)
	// {
	// 	ft_lstclear(&tmp, *del);
	// 	return (NULL);
	// }
	// newlst = tmp;
	tmp = ft_lstnew(f((*lst).content));
	if (tmp == NULL)
	{
		ft_lstclear(&tmp, *del);
		return (NULL);
	}
	lst = (*lst).next;
	newlst = tmp;
	while ((*lst).next != NULL)
	{
		tmp->next = ft_lstnew(f((*lst).content));
		if (tmp == NULL)
		{
			ft_lstclear(&newlst, *del);
			return (NULL);
		}
		lst = (*lst).next;
		tmp = tmp->next;
	}
	tmp->next = ft_lstnew(f((*lst).content));
	//printf("bip\n");
	return (newlst);
}

// int	main(void)
// {
// 	t_list	*l = ft_lstnew(strdup(" 1 2 3 "));
// 	t_list	*ret;

// 	l->next = ft_lstnew(strdup("ss"));
// 	l->next->next = ft_lstnew(strdup("-_-"));
// 	printf("===================== before %s\n", (*l).content);
// 	printf("after %s\n", l->next->content);
// 	printf("after %s\n", l->next->next->content);
// 	printf("after %p\n", l->next->next->next);
// 	ret = ft_lstmap(l, &fun_f, &fun_del);
// 	printf("bip\n");
// 	printf("===================== after %s\n", (*ret).content);
// 	printf("after %s\n", ret->next->content);
// 	printf("after %s\n", ret->next->next->content);
// 	printf("after %p\n", ret->next->next->next);
// 	return (0);
// }

// int	main(void)
// {
// 	t_list	*new;
// 	t_list	car = {"audi", NULL};
// 	t_list	train5 = {"vagon5", NULL};
// 	t_list	train4 = {"vagon4", &train5};
// 	t_list	train3 = {"vagon3", &train4};
// 	t_list	train2 = {"vagon2", &train3};
// 	t_list	train1 = {"vagon1", &train2};
// 	t_list	*train;

// 	train = &train1;
// 	//train = NULL;
// 	new = &car;
// 	printf("%p\n", train5.next);
// 	ft_lstmap(train, &fun_f, &fun_del);
// 	printf("%p\n", train5.next);
// 	return (0);
// }

// void	ft_print(char *str)
// {
// 	printf("%s\n", str);
// }

// int	main(int argc, char **argv)
// {
// 	//ft_print(argv[0]); //name programm
// 	ft_lstmap(argv[1]);
// 	return (0);
// }
