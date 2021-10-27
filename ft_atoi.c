/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:11:23 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/25 22:43:26 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
#include "libft.h"

static int	number(char *done)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (done[i] > 47 && done[i] < 58)
	{
		res = res * 10 + (done[i] - 48);
		i++;
	}
	return (res);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while ((str[i] == 32) || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == 45)
		res = (number((char *) &str[++i]) * (-1));
	else if (str[i] == 43)
		res = (number((char *) &str[++i]));
	else
		res = (number((char *) &str[i]));
	if (res < -2147483648)
		return (-1);
	else if (res > 2147483647)
		return (0);
	return (res);
}

// int	main(void)
// {
// 	char s1[] = "   123";
// 	printf("%d\n\n", atoi(s1));
// 	printf("%d\n", ft_atoi(s1));
// 	return (0);
// }
