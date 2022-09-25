#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

 size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ld;
	size_t	ls;

	i = ft_strlen(dest);
	j = 0;
	ld = ft_strlen(dest);
	ls = ft_strlen(src);
	if (size < 1)
		return (ls + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size <= ld)
		return (ls + size);
	else
		return (ld + ls);
}
