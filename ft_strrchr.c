/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:59:30 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/02 11:59:30 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	l;

	str = (char *)s;
	l = ft_strlen(str);
	while (l != 0)
	{
		if (*(str + l) == c)
			return (str + l);
		l--;
	}
	return (NULL);
}
