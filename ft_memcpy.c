#include "libft.h"
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    size_t i;

    i = 0;

    if(!dest)
        return ;
    while(i < n)
        (char *)dest[i] = (char *)src[i++];
    return (dest);
}