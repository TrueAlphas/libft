#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char *str;
    size_t l;

    str = (char *)s;
    l = ft_strlen(str);
    while(l != 0)
    {
        if(*(str + l) == c)
            return (str + l);
        l--;
    }
    return (NULL);
}