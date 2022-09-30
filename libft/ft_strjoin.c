#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *sr1;
	size_t i;
	size_t j; 
	size_t j2;

	sr1 = (char *)s1;
	i = 0;
	j2 = ft_strlen(s2);
	j = ft_strlen(sr1);
	if( j == 0 && j2 == 0)
		return(NULL);
	sr1 = (char *)malloc(sizeof(char) * (j + j2));
	while(s2[i] != 0){
		sr1[j + i] = s2[i];
	}
	return(sr1);
}