/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:28:01 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/25 22:43:00 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <strings.h>
//#include <stdio.h>

//void	*ft_memset(void *b, int c, size_t len)
// {
// 	int		i;
// 	char	*e;

// 	e = b;
// 	i = 0;
// 	while (i < len)
// 	{
// 		e[i] = c;
// 		i++;
// 	}
// 	return (e);
// }

void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, '\0', n);
}

// void	ft_bzero(void *s, size_t n)
// {
// 	int		i;
// 	char	*e;

// 	e = s;
// 	i = 0;
// 	while (i < n)
// 	{
// 		*e = '\0';
// 		e++;
// 		i++;
// 	}
// }

// int main ()
// {
//     char s[] = "qwerty";

// 	ft_bzero(s, 3);
//     printf("%s\n", s);
//     bzero(s, 4);
//     printf("%s\n", s);
//     return (0);
// }