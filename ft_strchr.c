/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:25:24 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/25 22:44:32 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;

	a = (char *)s;
	while (a != '\0')
	{
		if (*a == c)
		{
			return (a);
		}
		a++;
	}
	return (NULL);
}

// int	main()
// {
// 	char s[] = "hejkhvello";
// 	char r[] = "hejkhvello";

// 	printf("%s\n\n", strchr(s, 'z'));
// 	printf("%s\n", ft_strchr(r, 'z'));
// 	return (0);
// }