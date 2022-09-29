
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n == -2147483648)
	{
		ft_putnbr(n / 10, fd);
		write(fd, &"8", 1);
	}
	else if (n < 0)
	{
		write(fd, &"-", 1);
		ft_putnbr(n / (-1), fd);
	}
	else
	{
		if (n >= 10)
			ft_putnbr(n / 10, fd);
		a = n % 10 + '0';
		write(fd, &a, 1);
	}
}
