#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *temp;

	i = 0;
	temp = (char *)s;

	while (i < n && temp[i])
	{
		if (temp[i] == c)
			return (temp + i);
		i++;
	}
	return (NULL);
}