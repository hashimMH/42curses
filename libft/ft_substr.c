#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sr;
	char *temp;
	size_t i;
	size_t j;

	i = *(size_t *)start;
	sr = s;
	temp = (char *)malloc(len);
	if(len < 1)
		return(NULL);
	j = 0;
	while(i < len)
	{
		temp[j] = sr[i];
		i++;
		j++;
	}
	return (temp);
}
