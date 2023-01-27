#include "libft.h"
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
    char *destc;
    char *srcc;

    destc = (char *)dest;
    srcc = (char *)src;
    size_t i;

    i = 0;

    if(!dest)
        return (NULL);
    while(i < n)
    {
        destc[i] = srcc[i];
        i++;
    }
    return ((void *)destc);
}