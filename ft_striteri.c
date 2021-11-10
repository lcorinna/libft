/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:39:44 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/10 17:05:14 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// void	figa(unsigned int i, char *s)
// {
// 	*s = *s + i;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		f(i++, s);
		s++;
	}
}

// int	main(void)
// {
// 	char	str[] = "12345";

// 	ft_striteri(str, figa);
// 	printf("%s\n", str);
// 	return (0);	
// }