/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:00:35 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/06 19:40:48 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	
	d = (char *)dst;
	s = (char *)src;
	len -= 1;
	while (len != -1)
	{
		d[len] = s[len];
		len--;
	}
	return(d);
}

// int	main()
// {
// 	char s1[99] = "123456789";
// 	char s2[99] = "123456789";

// 	printf("%s\n", ft_memmove(NULL, s1, 0));
// 	printf("%s\n\n", s1);
 
	
// 	printf("%s\n", memmove(NULL, s2, 0));
// 	printf("%s\n", s2);
// 	return (0);
// }