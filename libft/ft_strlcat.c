#include "libft.h"

 size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ld;
	size_t	ls;

	i = ft_strlen(dest);
	j = 0;
	ld = ft_strlen(dest);
	ls = ft_strlen(src);
	if (dstsize < 1)
		return (ls + dstsize);
	while (src[j] && i < dstsize - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (dstsize <= ld)
		return (ls + dstsize);
	else
		return (ld + ls);
}
