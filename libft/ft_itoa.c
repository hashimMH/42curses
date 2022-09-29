#include "libft.h"

static char *ft_putnbr(int n)
{
	int i;
	char *a;

	i = 0;
	if (n < 0)
	{
		a[i] = "-";
		i++;
	}
	else
	{
		if (n >= 10)
			ft_putnbr(n / 10);
		a[i] = n % 10 + '0';
		i++;
	}
	return (a);
}

static char *ft_itoa(int n)
{
	char *a;
	int i;
	int b;

	b = n;
	i = 0;
	a = (char *)malloc(sizeof(n));
	if (sizeof(n) == 0)
		return (NULL);
	a = ft_putnbr(n);
	return (a);
}
