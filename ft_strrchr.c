/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 19:22:01 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/27 21:02:16 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;
	int		i;
	char	m;

	m = (char) c;
	i = 0;
	a = (char *) s;
	while (a[i])
		i++;
	while (i-- != 0)
	{
		if (a[i] == m)
			return (a += i);
		if (a[i + 1] == m)
			return (&a[i + 1]);
	}
	return (NULL);
}

// int	main()
// {
// 	char a[] = "6678";
// 	char b[] = "678";

// 	printf("%s\n\n", strrchr(a, '\0'));
// 	printf("%s\n", ft_strrchr(b, '\0'));
// 	return (0);
// }