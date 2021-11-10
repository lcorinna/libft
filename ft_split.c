/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorinna <lcorinna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:24:42 by lcorinna          #+#    #+#             */
/*   Updated: 2021/11/10 20:15:41 by lcorinna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**ft_arraymem(char const *s, char c)
{
	char	**formem;
	int		j;
	int		i;

	j = 0;
	i = 0;
	while (s[j])
	{
		if (s[j] == c)
		{
			while (s[j] == c)
				j++;
			i++;
		}
		j++;
	}
	formem = (char **) malloc ((i + 2) * sizeof(char *));
	return (formem);
}

static char	*ft_rec(char *full, int counter, int i, int line_number, char **str)
{
	char	*newstr;
	int		len;
	int		x;

	x = 1;
	len = 0;
	if (full[counter + 1] == '\0')
		x = 2;
	newstr = (char *) malloc((i + x) * sizeof(char));
	if (newstr == NULL)
	{
		while (line_number != -1)
			free (str[line_number--]);
		free (str);
		return (NULL);
	}
	counter -= i;
	while (i-- != 0)
		newstr[len++] = full[counter++];
	if (full[counter + 1] == '\0')
		newstr[len++] = full[counter];
	newstr[len] = '\0';
	return (newstr);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		counter;
	int		line_number;

	line_number = 0;
	counter = 0;
	i = 0;
	array = ft_arraymem(s, c);
	if (array == NULL)
		return (array);
	while (s[counter])
	{
		if (s[counter] == c || s[counter + 1] == '\0')
		{
			array[line_number] = ft_rec((char *)s, counter, i, line_number, array);
			if (array[line_number] == NULL)
				return (NULL);
			line_number++;
			i = -1;
			if (s[counter + 1] == '\0')
			{
				array[line_number] = NULL;
				return (array);				
			}
			while (s[counter] == c)
				counter++;
			counter -= 1;
		}
		counter++;
		i++;
	}
	array[line_number] = NULL;
	return (array);
}

// int	main(void)
// {
// 	char	**array;
// 	int		line_number;
// 	char	s1[] = "123 123 123";
// 	char	c = '\0';

// 	line_number = 0;
// 	array = ft_split(s1, c);
// 	while (array[line_number] != NULL)
// 	{
// 		printf("%s\n", array[line_number]);
// 		line_number++;
// 	}
// 	return (0);
// }
