#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	a;
	char *sr;

	a = 0;
	while (s[a] != '\0')
	{
		f(a, s[a]);
		a++;
	}
}