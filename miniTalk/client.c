/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:23:36 by hmohamed          #+#    #+#             */
/*   Updated: 2022/12/17 15:20:16 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_atoi(const char *str)
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

void	sendbit(int pid, char c)
{
	int		i;
	int		bit;

	i = 0;
	bit = 0;
	while (bit < 8)
	{
		i = 1 & (c >> bit);
		//printf("%i \n", i);
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
			write(1, "error", 5);
			return (0);
		}
		while (av[2][i])
		{
			sendbit(pid, av[2][i]);
			i++;
		}
	}
}
