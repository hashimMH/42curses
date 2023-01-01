/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:23:43 by hmohamed          #+#    #+#             */
/*   Updated: 2022/12/26 14:39:36 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, &"8", 1);
	}
	else if (n < 0)
	{
		write(fd, &"-", 1);
		ft_putnbr_fd(n / (-1), fd);
	}
	else
	{
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		a = n % 10 + '0';
		write(fd, &a, 1);
	}
}

static void	handler(int signal)
{
	static int	bit;
	static char	a;

	if (signal == SIGUSR1)
	{
		a |= (0x01 << bit);
	}
	bit++;
	if (bit == 8)
	{
		write(1, &a, 1);
		bit = 0;
		a = 0;
	}
}

int	main(int ac, char **av)
{
	(void)av;
	ft_putnbr_fd(getpid(), 1);
	write(1, "\n", 1);
	while (ac == 1)
	{
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
		pause();
	}
}
