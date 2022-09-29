#include "libft.h"

void *calloc(size_t count, size_t size)
{
	size_t	i;
	void	*str;

	i = 0;
	str = (void *)malloc(count * size);

	while(i < (count * size))
	{
		*(char *)(str + i) = 0;
		i++;
	}
	return (str);
}