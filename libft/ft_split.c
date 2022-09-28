#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}


char **ft_split(char const *s, char c)
{
	char *sr;
	char **temp;
	int i;
	int j;
	int a;
	
	sr = s;
	i = 0;
	j = 0;
	a = -1;
	if (ft_strlen(sr) <= 0)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * ft_strlen(sr));
	while(sr[i])
	{
		a++;
		if(sr[i] != c)
			temp[j][a] = sr[i];
		else
		{
			a = 0;
			j++;
		}
		i++;
	}
	temp[j + 1] = 0;
	return (temp);
}