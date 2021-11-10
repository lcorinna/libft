/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 11:46:08 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/10 18:22:33 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		count;
	long long	number;

	number = (long long) n;
	if (number < 0)
	{
		write(fd, "-", 1);
		number *= -1;
	}
	count = number % 10 + '0';
	if (number / 10 > 0)
	{
		ft_putnbr_fd(number / 10, fd);
	}
	write(fd, &count, 1);
}

// int	main(void)
// {
// 	int	i = -2147483648;

// 	ft_putnbr_fd(i, 2);
// 	return (0);
// }