/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:23:36 by hmohamed          #+#    #+#             */
/*   Updated: 2022/12/21 14:27:22 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	ft_atoi(const char *str)
{
	int					i;
	int					c;
	unsigned long long	num;

	i = 0;
	c = 1;
	num = 0;
	if (str == 0)
		return (0);
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
		if (str[i++] == '-')
			c = -1;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		if (num > 2147483647 && c == 1)
			return (0);
		else if (num > 2147483647 && c == -1)
			return (0);
		i++;
	}
	if (str[i] != '\0' || (c == -1))
		return (0);
	return (c * num);
}

static void	sendbit(int pid, char c)
{
	int		i;
	int		bit;

	i = 0;
	bit = 0;
	while (bit < 8)
	{
		i = 1 & (c >> bit);
		if (i != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit++;
		usleep(100);
	}
}

int	main(int ac, char **av)
{
	int	pid;
	int	i;

	i = 0;
	pid = 0;
	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		if (pid == 0)
		{
			write(2, "error", 5);
			return (0);
		}
		while (av[2][i])
		{
			sendbit(pid, av[2][i]);
			i++;
		}
	}
	else
	{
		write(2, "error", 5);
	}
}
