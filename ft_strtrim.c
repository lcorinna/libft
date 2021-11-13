/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:20:59 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/13 19:20:45 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		res_len;

	i = 0;
	j = ft_strlen(s1);
	res = (char *) set;
	while (s1[i] && res != NULL)
		res = ft_strchr(set, s1[i++]);
	i--;
	res = (char *) set;
	while (j > 0 && res != NULL)
		res = ft_strchr(set, s1[--j]);
	res_len = j - i + 2;
	if (j == 0)
		res_len = 1;
	res = (char *) malloc(sizeof(char) * res_len);
	if (res == NULL)
		return (res);
	while (i <= j && res_len != 1)
		*res++ = s1[i++];
	*res = '\0';
	j = 1 - res_len;
	return (res + j);
}
