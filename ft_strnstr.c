/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:05:36 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/09 15:41:13 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		k;
	int		j;

	j = 0;
	if (*needle == 0)
		return ((char *) haystack);
	while (haystack[j] != '\0' && len != 0)
	{
		k = 0;
		if (haystack[j] == needle[k])
		{		
			while (haystack[j++] == needle[k++] && len-- != 0)
			{
				if (needle[k] == 0)
					return ((char *) &haystack[j - k]);
			}
			j -= k;
			len += k;
		}
		j++;
		len--;
	}
	return (NULL);
}

// int	main()
// {
// 	char haystack[] = "MZIRIBMZIRIBMZE123";
// 	char needle[] = "MZIRIBMZE";

// 	printf("%s\n\n", strnstr(haystack, needle, 18));
// 	printf("%s\n", ft_strnstr(haystack, needle, 18));
// 	return (0);
// }