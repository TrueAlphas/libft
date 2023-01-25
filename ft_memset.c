#include "libft.h"
void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    char *temp;
    i = 0;
    temp = (char *)s;
    while(i < n)
        temp[i++] = (char)c;
    return (s);
}