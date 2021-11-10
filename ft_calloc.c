/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:48:34 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/10 20:08:03 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h> 
//#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*m;

	m = malloc(count * size);
	if (m == NULL || count * size == 0 )
		return (m);
	ft_bzero(m, count * size);
	return (m);
}

// int main(void)
// {
// 	int size = 8539;

// 	// printf("%p\n\n", calloc(size, sizeof(int)));
// 	// printf("%p\n", ft_calloc(size, sizeof(int)));

// 	void *d1 = ft_calloc(size, sizeof(int));
// 	void *d2 = calloc(size, sizeof(int));
// 	if (memcmp(d1, d2, size * sizeof(int)))
// 		printf("%s\n", "TEST_FAILED");
// 	free(d1);
// 	free(d2);
// 	printf("%s\n","TEST_SUCCESS");
// 	return (0);
// }
