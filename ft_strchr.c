/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajirob <ayajirob@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:25:24 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/28 19:18:51 by ayajirob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*a;

	a = (char *) s;
	while (*a)
	{
		if (*a == c)
			return (a);
		a++;
	}
	if (*a == c)
		return (a);
	return (NULL);
}

// int	main()
// {
// 	char s[] = "tere sso \0ma\0";
// 	int r = 'a';

// 	printf("%s\n\n", strchr(s, r));
// 	printf("%s\n", ft_strchr(s, r));
// 	return (0);
// }