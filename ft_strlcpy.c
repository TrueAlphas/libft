#include "libft.h"

size_t strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sizesrc;

	i = 0;
	sizesrc = 0;
	while (src[sizesrc])
		sizesrc++;
	if (size < 1)
		return (sizesrc);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (sizesrc);
}
