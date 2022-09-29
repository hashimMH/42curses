#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const char *sr1;
	const char *sr2;

	sr1 = s1;
	sr2 = s2;

	i = 0;
	while (i < n)
	{
		if (sr1[i] != sr2[i])
			return (sr1[i] - sr2[i]);
		else if (sr1[i] == '\0' && sr2[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
