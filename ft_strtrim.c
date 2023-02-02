/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 01:41:53 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/02 12:13:52 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*

PARAMETRI
s1: The string to be trimmed.
set: The reference set of characters to trim.
RITORNO
The trimmed string.
NULL if the allocation fails.
FUNZIONE ESTERNE
 malloc
DESCRIZIONE
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (start <= end && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end >= start && ft_strchr(set, s1[start]) != NULL)
		end--;
	s = (char *)malloc(end - start + 2);
	while (start <= end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}
