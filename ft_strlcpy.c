/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 17:12:36 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/27 20:39:48 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int i;
	char *q;

	q = (char *)src;
	i = 0;
	while (*src != 0)
	{
		src++;
		i++;
	}
	if (dstsize == 0)
		return (i);
	if (i < (int) dstsize)
		dstsize = i + 1;
	while (dstsize != 1)
	{
		*dst = *q;
		dstsize--;
		dst++;
		q++;
	}
	*dst = '\0';
	return (i);
}

// int main()
// {
// 	char a[22] = "111";
// 	char b[22] = "";
// 	char c[] = "111";
// 	char d[] = "";
// 	printf("%lu\n", strlcpy(a, b, 5));
// 	printf("%s\n\n", a);
// 	printf("%lu\n", ft_strlcpy(c, d, 5));
// 	printf("%s\n", c);
// 	return (0);
// }