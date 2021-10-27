/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:48:34 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/27 16:49:13 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	char	*a;

	i = 0;
	a = (char *) malloc(count * size);
	if (a == NULL)
		return (a);
	while (count-- > 0)
		a[i++] = '\0';
	return (&a[0]);
}

// int	main(void)
// {
	
// 	printf("%p\n\n", calloc(0, sizeof(char *)));
// 	printf("%p\n", ft_calloc(0, sizeof(char *)));
// 	return (0);
// }
