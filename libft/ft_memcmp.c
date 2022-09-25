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



#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[6] = "Ahmed";
	char b[6] = "Nadir";
	char s[6] = "Ahmed";
	char d[6] = "Nadir";
	printf("dest is: %s , %s\n", a , s);
	int ret = ft_memcmp(a,s,5);
	int rett = memcmp(b,d,5);
	printf("Our fun says....  : %s, %d\n", b , ret);
	printf("Original  says.... : %s , %d \n", d , rett);
	return(0);

}