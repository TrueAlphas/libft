#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t size){
	size_t	i;
	size_t	j;
	size_t	ldest;
	size_t	lsrc;

	i = 0;
	j = 0;
	ldest = ft_strlen(dst);
	lsrc = ft_strlen(src);
	while (dst[i] != '\0' )
	{
		i++;
	}
	if (size == 0 || size <= ldest)
	{
		return (lsrc + size);
	}
	while (src[j] != '\0' && j < size - ldest - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ldest + lsrc);
}