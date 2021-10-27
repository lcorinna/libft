/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 20:20:04 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/27 13:27:40 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char *) s1;
	b = (unsigned char *) s2;
	while (i < (int) n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}

// int	main()
// {
// 	char str1[] = "11111";
// 	char str2[] = "13r11";
// 	printf("%d\n\n", memcmp("11\0e3", "ta\0as", 5));
// 	printf("%d\n", ft_memcmp("11\0e3", "ta\0as", 5));
// 	return (0);
// }