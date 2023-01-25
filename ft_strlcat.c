#include "libft.h"

size_t strlcat(char *dst, const char *src, size_t size){
	size_t	i;
	size_t	j;
	size_t	ldest;
	size_t	lsrc;

	i = 0;
	j = 0;
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	while (dest[i] != '\0' )
	{
		i++;
	}
	if (size == 0 || size <= ldest)
	{
		return (lsrc + size);
	}
	while (src[j] != '\0' && j < size - ldest - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ldest + lsrc);
}