/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:34:46 by abuonomo          #+#    #+#             */
/*   Updated: 2023/01/25 15:34:46 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_bzero(void *s, size_t n)
{
    char *ptr;
    ptr = (char *)s;
    size_t i;
    i = 0;
    if(!s)
        return ;
    while(i < n)
    {
        *(ptr + i) = '\0';
        i++;
    }
}