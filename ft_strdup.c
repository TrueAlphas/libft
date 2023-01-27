#include "libft.h"
char *strdup(const char *s)
{
    char *ptr;
    size_t i;

    i = 0;
    ptr = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
    if(!ptr)
        return (NULL);
    while(s[i])
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}