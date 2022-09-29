#include "libft.h"

char **ft_split(char const *s, char c)
{
	char *sr;
	char **temp;
	int i;
	int j;
	int a;
	
	i = 0;
	j = 0;
	a = -1;
	if (ft_strlen(sr) <= 0)
		return (NULL);
	temp = (char **)malloc(sizeof(char) * ft_strlen(s));
	while(s[i])
	{
		a++;
		if(s[i] != c)
			temp[j][a] = s[i];
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