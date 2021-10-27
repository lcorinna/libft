/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:34:06 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/27 18:08:49 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

// int	ft_strlen(const char *r)
// {
// 	int	i;

// 	i = 0;
// 	while (r[i])
// 		i++;
// 	return (i);
// }

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;

	len = (ft_strlen(s1) + 1);
	dup = (char *) malloc(len * sizeof(char));
	if (dup == NULL)
		return (dup);
	while (*s1)
		*dup++ = *s1++;
	*dup = '\0';
	return (dup - len + 1);
}

// int main(void)
// {
// 	char str[] = "HA \0 tu me vois pas !";
// 	printf("%s\n\n", strdup(str));
// 	printf("%s\n", ft_strdup(str));	
// 	return (0);
// }
