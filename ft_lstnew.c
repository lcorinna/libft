/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:43:28 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/18 19:07:54 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*f_element;

	f_element = (t_list *) malloc(sizeof(t_list));
	if (f_element == NULL)
		return (f_element);
	(*f_element).content = content;
	f_element->next = NULL;
	return (f_element);
}

// int	main(void)
// {
// 	t_list	artem;
// 	t_list	leha = {"1234", &artem};

// 	//leha.content = 34;
// 	printf("%s\n", leha.content);
// 	printf("%p\n\n", leha.next); 
// 	leha = *ft_lstnew("qwerty");
// 	printf("%s\n", leha.content);
// 	printf("%p\n", leha.next); 
// 	return (0);
// }

// struct	chanel
// {
// 	char	name[44];
// 	int		sub;
// 	int		n_video;
// };

// int	main(void)
//{
	// char	name[20];
	// int		sub;
	// int		n_video;

// 	// name = "GOA";
// 	// sub = 111;
// 	// n_video = 13;

// 	struct chanel GOA;
// 	struct chanel gaida95;
// 	gaida95 = {
// 		"gaida95",
// 		22,
// 		11,
// 	}
// 	return (0);
// }

// struct	company
// {
// 	char	name[44];
// 	int		cost;
// 	int		n_workers;
// } tesla;

// int	main(void)
// {
// 	struct company	google;

// 	google = {"google", 150, 10000};
// 	printf("%s\n%d\n%d\n", google.name, google.cost, google.n_workers);
// 	google.name = "yandex";
// 	printf("%s\n", google.name);
// 	return (0);
// }

//#include <string.h>

// typedef struct s_company
// {
// 	char	name[50];
// 	int		cost;
// 	int		n_workers;
// }	t_company;

// int	exist_company(char *str, struct s_company *company)
// {
// 	if (strcmp(str, company->name) == 0)
// 		return (1);
// 	return (0);
// }

// int	main(void)
// {
// 	struct s_company	my_company;
// 	struct s_company	*pointer_on_my_company;

// 	my_company = {"lcorinna", 999, 12};
// 	*pointer_on_my_company = &my_company;
// 	*pointer_on_my_company->name = *strcpy(my_company.name, "gaida");
// 	printf("%d\n\n", exist_company("lcorinna", &my_company));
// 	printf("%s\n", pointer_on_my_company->name);
// 	return (0);
// }

	// int	name[10]; // a regular array
// struct s_company	it_companies[10] = {"google", 300, 200, // structure array
	// 										 "yandex", 100, 400,
	// 										"intel", 10, 40};
	// strcpy(it_companies[3].name, "lcorinna");
	// it_companies[3].cost = 500;
	// it_companies[3].n_workers = 4000;

	//pointer_on_my_company = &my_company;
		// printf("4: %s\n", it_companies[3].name);
	// printf("5: %d\n", it_companies[4].cost);