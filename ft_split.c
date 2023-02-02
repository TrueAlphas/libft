/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 02:08:55 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/02 11:52:15 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
s: The string to be split.
c: The delimiter character.
Return value
The array of new strings resulting from the split.
NULL if the allocation fails.
External functs.
malloc, free
Description
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.*/

#include "libft.h"

size_t	ft_count(char const *s, char c)
{
	size_t	ret;
	size_t	i;

	i = 0;
	ret = 0;
	while (s[i])
	{
		if (s[i] == c)
			ret++;
		i++;
	}
	return (ret + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	len;
	size_t	i;

	matrix = malloc (sizeof(char *) * ft_count (s, c));
	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			len = 1;
			while (*s != c && *s != 0)
			{
				s++;
				len++;
			}
			matrix[i++] = ft_substr (s - len, 0, len);
		}
	}
	matrix[i] = 0;
	return (matrix);
}
