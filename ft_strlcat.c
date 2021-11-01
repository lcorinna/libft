/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:11:41 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/01 13:33:57 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{	
	char	*tmp;

	tmp = dst;
	if (ft_strlen(dst) >= (int) dstsize)
		return (ft_strlen(src) + (int) dstsize);
	while (*dst)
	{
		dst++;
		dstsize--;
	}
	while (dstsize > 1 && *src)
	{
		*dst = *src;
		src++;
		dst++;
		dstsize--;
	}
	*dst = '\0';
	return (ft_strlen(src) + ft_strlen(tmp));
}

// int	main()
// {
// 	char a[15] = "aaa";
// 	char b[15] = "12345";
// 	char c[] = "aaa";
// 	char d[] = "12345";

// 	printf("%lu\n", strlcat(a, b, 13));
// 	printf("%s\n\n", a);
// 	printf("%lu\n", ft_strlcat(c, d, 13));
// 	printf("%s\n\n", c);
// 	return (0);
// }