#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char *tem1;
	const char *tem2;

	tem1 = dst;
	tem2 = src;
	i = 0;
	while (i < len && tem2 <= tem1)
	{
		tem1[len - 1] = tem2[len - 1];
		len --;
	}
	while (i < len && tem2 > tem1 )
	{
		tem1[i] = tem2[i];
		i++;
	}
	return (tem1);
}
