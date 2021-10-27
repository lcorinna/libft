/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:36:11 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/25 22:45:49 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"

int	ft_toupper(int i)
{
	if (i > 96 && i < 123)
		i -= 32;
	return (i);
}

// int	main ()
// {
// 	char	c;
// 	char 	b;

// 	b = 'E';
// 	c = toupper(99);
// 	printf("%c\n\n", c);
// 	printf("%c\n", ft_toupper(b));
// 	return(0);
// }
