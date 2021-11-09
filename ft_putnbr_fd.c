/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:46:08 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/09 15:36:28 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	ft_intlen(long long i)
// {
// 	int	size;

// 	while (i > 0)
// 	{
// 		i /= 10;
// 		size++;
// 	}
// 	return (size);
// }

// char	*ft_itoa(int n)
// {
// 	char	*count;
// 	int		size;
// 	int 	b;
// 	long long number;

// 	number = (long long) n;
// 	b = 1;
// 	if (n == 0)
// 		return ("0");
// 	if (number < 0)
// 	{
// 		number *= -1;
// 		b = 2;
// 	}
// 	size = ft_intlen(number) + b;
// 	count = (char *) malloc((size) * sizeof(char));
// 	count[--size] = '\0';
// 	while (number > 0)
// 	{
// 		count[--size] = 48 + number % 10;
// 		number /= 10;
// 	}
// 	if (b == 2)
// 		count[--size] = '-';
// 	return (count);
// }

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	while (*str != 0)
	{
		write(fd, str, 1);
		str++;
	}
}

// int	main(void)
// {
// 	int	i = 57;

// 	ft_putnbr_fd(i, 2);
// 	return (0);
// }