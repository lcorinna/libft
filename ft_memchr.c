/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 19:41:38 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/27 16:01:26 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	symbol;

	symbol = (unsigned char) c;
	str = (unsigned char *) s;
	while (n != 0)
	{
		if (*str == symbol)
			return (str);
		n--;
		str++;
	}
	return (NULL);
}

// int main()
// {
// 	char	str1[] = "1234567890";
// 	int		c = '2';

// 	printf("%s\n\n", memchr(str1, c, 5));
// 	printf("%s\n", ft_memchr(str1, c, 5));
// 	return (0);
// }