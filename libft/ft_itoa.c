#include "libft.h"

static char csign(int nb)
{
	char c;
	c = '+';
	if (nb < 0)
		c = '-';
	return (c);
}

static char *nbr(int n)
{
	char *a;
	int	i;
	char c;

	c = csign(n);
	a = NULL;
	i = 0;
	while (n >= 10)
	{
		a[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	a[i++] = n;
	if(c == '-')
		a[i++] = c;
	a[i] = 0;
	return (a);
}

char *ft_itoa(int n)
{
	char *a;
	char *temp;
	int i;
	int j;
	
	j = 0;
	a = nbr(n);
	i = ft_strlen(a);
	if (sizeof(n) == 0 || n == -2147483648)
		return (NULL);
	temp = (char *)malloc(i + 1);
	while(i > 0)
	{
		temp[j] = a[i];
		i--;
		j++;
	}
	return (temp);
}