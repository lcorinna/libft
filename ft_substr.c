/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 15:23:41 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/09 12:53:25 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

// int	ft_strlen(const char *r)
// {
// 	int	i;

// 	i = 0;
// 	while (r[i])
// 		i++;
// 	return (i);
// }

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	int		i;
	int		count;

	i = 0;
	count = ft_strlen(s) - start;
	if (count > (int) len)
		count = (int) len;
	newstr = (char *) malloc(sizeof(char) * (count + 1));
	if (newstr == NULL)
		return (newstr);
	while (s[start] && len-- != 0)
		newstr[i++] = s[start++];
	newstr[i] = '\0';
	return (newstr);
}

// int main(void)
// {
// 	char	str[] = "qwerty";
// 	printf("%s\n", ft_substr(str, 1, 22));
// 	return (0);
// }