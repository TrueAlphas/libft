/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 11:47:21 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/02 11:47:21 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(const void *src, void *dest, size_t n)
{
	char	*temp_dest;
	char	*temp_src;
	size_t	i;
	size_t	len;

	temp_src = (char *)src;
	temp_dest = (char *)dest;
	i = 0;
	len = ft_strlen(src);
	if ((!src && !dest) || n == 0)
		return ((void *)src);
	if (n > len + 1)
		return (0);
	while (i < len)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	temp_dest[i] = '\0';
	return ((void *)temp_dest);
}
