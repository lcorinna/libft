/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:24:42 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/13 15:42:14 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**ft_clean_memory(char **array, int i)
{
	while (i > -1)
	{
		free (array[i]);
		array [i] = NULL;
		i--;
	}
	free (array);
	array = NULL;
	return (NULL);
}

static char	**ft_mem_for_array(char const *s, char c)
{
	char	**array;
	int		i;
	int		m;

	m = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			m++;
			while (s[i] != c && s[i])
				i++;
			i--;
		}
		i++;
	}
	array = (char **) malloc((m + 1) * sizeof(char *));
	if (m == 0)
		array[0] = NULL;
	return (array);
}

static char	**ft_write_array(char **array, char const *s, char c)
{
	int	i;
	int	j;
	int	m;

	i = 0;
	j = 0;
	m = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				i++;
				j++;
			}
			array[m] = ft_substr(s, i - j, j);
			if (array[m] == NULL)
				return (ft_clean_memory(array, m));
			m++;
			i--;    "AA AA jkA"
			j = 0;
		}
		i++;
	}
	array[m] = NULL;
	return (array);
}

// int	ft_strlen(const char *r)
// {
// 	int	i;

// 	i = 0;
// 	while (r[i])
// 		i++;
// 	return (i);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*newstr;
// 	int		i;
// 	int		count;

// 	i = 0;
// 	count = ft_strlen(s) - start;
// 	if (count > (int) len)
// 		count = (int) len;
// 	if (count <= 0)
// 		count = 0;
// 	newstr = (char *) malloc(sizeof(char) * (count + 1));
// 	if (newstr == NULL)
// 		return (newstr);
// 	while (s[start] != 0 && len-- != 0 && count != 0)
// 		newstr[i++] = s[start++];
// 	newstr[i] = '\0';
// 	return (newstr);
// }

char	**ft_split(char const *s, char c)
{
	char	**array;

	array = ft_mem_for_array(s, c);
	if (array == NULL)
		return (array);
	array = ft_write_array(array, s, c);
	return (array);
}

// int	main(void)
// {
// 	char	**array;
// 	int		i = 0;
// 	char str[] = "                  olol";
// 	char c = ' ';
// 	array = ft_split(str, c);
// 	while (array[i])
// 	{
// 		printf("%s\n", array[i]);
// 		i++;
// 	}
// 	return (0);
// }
