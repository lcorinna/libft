/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 22:08:11 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/09 15:50:49 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

// int	ft_strlen(const char *r)
// {
// 	int	i;

// 	i = 0;
// 	while (r[i])
// 		i++;
// 	return (i);
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		p;
	char	*join;

	p = 0;
	i = 0;
	join = (char *) malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (join == NULL)
		return (NULL);
	while (s1[i])
		join[p++] = s1[i++];
	i = 0;
	while (s2[i])
		join[p++] = s2[i++];
	join[p] = '\0';
	return (join);
}

// int	main (void)
// {
// 	char	s1[] = "qwert";
// 	char	s2[] = "12345";
// 	printf("%s\n", ft_strjoin(s1, s2));
// 	return (0);
// }