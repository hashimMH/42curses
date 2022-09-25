
static int	checkspace(char h)
{
	if (h == '\f' || h == '\t' || h == ' '
		|| h == '\n' || h == '\r' || h == '\v')
		return (1);
	return (0);
}



int	ft_atoi(char *str)
{
	int	i;
	int	c;
	int	num;

	i = 0;
	c = 1;
	num = 0;
	while (str[i] != '\0' && checkspace(str[i]))
		i++;
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			c = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
			num = num * 10 + (str[i] - '0');
			i++;
	}
	return (c * num);
}

#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	printf("our atoi : %d\n" ,ft_atoi(av[1]));
	printf("real atoi : %d \n" , atoi(av[1]));
	return (0);
}