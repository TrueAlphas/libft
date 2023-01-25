/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <abuonomo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:34:57 by abuonomo          #+#    #+#             */
/*   Updated: 2023/01/25 15:35:02 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    ptr = (void *)malloc(nmemb * size);
    if(!ptr)
        return (NULL);
    ft_bzero(ptr,nmemb);
    return(ptr);
}