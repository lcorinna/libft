/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:26:32 by lcorinna          #+#    #+#             */
/*   Updated: 2021/10/27 13:37:59 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *) s1;
	b = (unsigned char *) s2;
	i = 0;
	while ((i < (int) n) && (a[i] != '\0' || b[i] != '\0'))
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char	a[] = "111111111\0e3";
// 	char	b[] = "111111111\0f3";
// 	printf("%d\n\n", strncmp(b, a, 88));
// 	printf("%d\n", ft_strncmp(b, a, 88));
// 	return (0);
// }