/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:42:02 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/27 15:42:58 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*e;
	char	*w;

	w = dst;
	e = (char *)src;
	i = 0;
	if (w == NULL && e == NULL)
		return (NULL);
	while (i < (int) n)
	{
		w[i] = e[i];
		i++;
	}
	return (w);
}

// int	main()
// {
// 	char s1[11]="123456789";
// 	char s2[]="123456789";
// 	char *s3 = NULL;
// 	char *s4 = NULL;

// 	printf("%s\n\n", memcpy(s1, s2, 2));
	
// 	printf("%s\n", ft_memcpy(s3, s4, 2));
// 	return (0);
// }
