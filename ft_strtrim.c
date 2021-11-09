/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:20:59 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/09 16:07:52 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// char	*ft_strchr(const char *s, int c)
// {
// 	char	*a;

// 	a = (char *) s;
// 	while (*a)
// 	{
// 		if (*a == c)
// 			return (a);
// 		a++;
// 	}
// 	if (*a == c)
// 		return (a);
// 	return (NULL);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		res_len;

	res_len = 0;
	j = 0;
	i = 0;
	res = (char *) set;
	while (s1[i] && res != NULL)
		res = ft_strchr(set, s1[i++]);
	i--;
	while (s1[j])
		j++;
	res = (char *) set;
	while (j > 0 && res != NULL)
		res = ft_strchr(set, s1[--j]);
	res_len = j - i + 2;
	res = (char *) malloc(sizeof(char) * res_len);
	if (res == NULL)
		return (res);
	while (i <= j)
		*res++ = s1[i++];
	*res = '\0';
	return (res - res_len + 1);
}

// int	main(void)
// {
// 	char str[] = "qwqertwq";
// 	char set[] = "q";
// 	printf("%s\n", ft_strtrim(str, set));
// 	return (0);
// }