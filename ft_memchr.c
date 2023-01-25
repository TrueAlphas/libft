#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    char *str;
    str = (char *)s;
    size_t i;
    i = 0;
    while(i <= n)
    {
        if(*(str + i) == c)
            return ((void *)(str + i));
        i++;
    }
    return (NULL);                                                                                                                                                                                                                                                                                                                                                                                  
}