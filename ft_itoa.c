/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 23:09:33 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/09 15:43:20 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	ft_intlen(long long i)
{
	int	size;

	size = 0;
	while (i > 0)
	{
		i /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char		*count;
	int			size;
	int			b;
	long long	number;

	number = (long long) n;
	b = 1;
	if (n == 0)
		return ("0");
	if (number < 0)
	{
		number *= -1;
		b = 2;
	}
	size = ft_intlen(number) + b;
	count = (char *) malloc((size) * sizeof(char));
	count[--size] = '\0';
	while (number > 0)
	{
		count[--size] = 48 + number % 10;
		number /= 10;
	}
	if (b == 2)
		count[--size] = '-';
	return (count);
}

// int	main(void)
// {
// 	int	count;
// 	count = 2147483647;
// 	printf("%s\n", ft_itoa(count));
// 	return (0);
// }