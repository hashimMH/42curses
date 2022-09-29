#include "libft.h"

char	*ft_strdup(const char *src)
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
