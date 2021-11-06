/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:29:31 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/05 16:29:34 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// char	figa(unsigned int i, char c)
// {
// 	c = c + i;
// 	return (c);
// }

int	ft_strlen(const char *r)
{
	int	i;

	i = 0;
	while (r[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	
	str = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	i = 0;
	while (s[i])
	{
		str[i] = f(1, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char str[] = "1112345";
	
// 	printf("%s\n", ft_strmapi(str, figa));
// 	return (0);
// }
