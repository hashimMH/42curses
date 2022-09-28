#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	char *sr;

	a = 0;
	while (s[a] != '\0')
		a++;
	if(a <= 0)
		return (NULL);
	sr = (char *)malloc(sizeof(char) * a);
	a = 0;
	while (s[a] != '\0')
	{
		sr[a] = f(a, s[a]);
		a++;
	}
	return (sr);
}