#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dp;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dp = (char *)malloc(i * sizeof(char));
	i = 0;
	while (src[i])
	{
		dp[i] = src[i];
		i++;
	}
	dp[i] = '\0';
	return (dp);
}

int main()
{
	char *st;
	char *sp;

	st = "hash";
	sp = ft_strdup(st);
	printf("%s %s", st , sp);
	return(0);
}
