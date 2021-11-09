/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:00:35 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/09 16:21:01 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

// void	*ft_memcpy(void *dst, const void *src, size_t n)
// {
// 	int		i;
// 	char	*e;
// 	char	*w;

// 	w = dst;
// 	e = (char *)src;
// 	i = 0;
// 	if (w == NULL && e == NULL)
// 		return (NULL);
// 	while (i < (int) n)
// 	{
// 		w[i] = e[i];
// 		i++;
// 	}
// 	return (w);
// }

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	len -= 1;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy (d, s, len + 1));
	while ((int)len != -1)
	{
		d[len] = s[len];
		len--;
	}
	return (d);
}

// int main()
// {
// 	char s1[99] = "123456789";
// 	char s2[99] = "123456789";

// 	printf("%s\n\n", ft_memmove(s1, s1 + 3, 4));
// 	//printf("%s\n\n", s1);

// 	printf("%s\n", memmove(s2, s2 + 3, 4));
// 	//printf("%s\n", s2);

// 	// char dst1[0xF0];
// 	// char dst2[0xF0];
// 	// char *data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
// 	// int size = 0xF0 - 0xF;

// 	// memset(dst1, 'A', sizeof(dst1));
// 	// memset(dst2, 'A', sizeof(dst2));	

// 	// memcpy(dst1, data, strlen(data));
// 	// memcpy(dst2, data, strlen(data));
// 	// printf("%s\n\n", dst2);
// 	// printf("%s\n\n", memmove(dst1, dst1 + 3, size));
// 	// printf("%s\n\n", ft_memmove(dst2, dst2 + 3, size));
// 	// if (!memcmp(dst1, dst2, size))
// 	// 	printf("%s\n", "TEST_SUCCESS");
// 	// else
// 	// 	printf("%s\n", "TEST_fail");
// 	// return (0);
// }