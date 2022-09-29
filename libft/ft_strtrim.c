#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *sr;
	char *st;
	char *temp;
	int i ;
	int j;
	int a;

	sr = s1;
	st = *set;
	i = 0;
	a = 0;
	j = ft_strlen(sr);
	if ( j <= 0)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * j);
	while(i < j && ft_strchr(st, sr[i]) != 0)
		i++;
	while(j > i && ft_strchr(st, sr[j]) != 0)
		j--;
	while(i < j){
		temp[a] = sr[i];
		a++;
		i++;
	}
	return(temp);
}