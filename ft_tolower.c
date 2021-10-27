/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:07:01 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/27 16:11:39 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>
#include "libft.h"

int	ft_tolower(int i)
{
	if (i > 64 && i < 91)
		i += 32;
	return (i);
}

// int	main()
// {
// 	char	c = 'A';
// 	char	b = 'A';

// 	printf("%c\n\n", tolower (c));
// 	printf("%c\n", ft_tolower(b));
// 	return (0);
// }
