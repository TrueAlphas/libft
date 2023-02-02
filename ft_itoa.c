/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 15:17:24 by abuonomo          #+#    #+#             */
/*   Updated: 2023/02/02 11:39:31 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/

#include <stdio.h>
#include "libft.h"

int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ret;
	int		size;
	char	right;
	int		i;

	size = ft_count(n);
	ret = (char *)malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		ret[size - size] = '-';
	}
	i = 1;
	while (n != 0)
	{
		right = n % 10;
		ret[size - i] = right + '0';
		n = n / 10;
		i++;
	}
	ret[size] = 0;
	return (ret);
}

int	main()
{
	int number = 2147483649;
	char *to_string;
	to_string = ft_itoa(number);
	printf("STAMPA? %s",to_string);
	return (0);
}
