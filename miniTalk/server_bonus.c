/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 18:23:43 by hmohamed          #+#    #+#             */
/*   Updated: 2022/12/14 20:50:40 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

int	signalpid;

void	handler(int signal, siginfo_t *info, void *context)
{
	static int	bit;
	static char	a;

	(void)context;
	if (signal == SIGUSR1)
	{
		a |= (0x01 << bit);
	}
	bit++;
	//  printf("bit = %d", bit);
	if (bit == 8)
	{
		write(1, &a, 1);
		bit = 0;
		a = 0;
	}
	signalpid = info->si_pid;
}

void	shandler(int signal)
{
	if (signal)
		kill(signalpid, SIGINT);
}

int	main(int ac, char **av)
{
	struct sigaction	sa;

	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = handler;
	(void)av;
	printf("pid :  %d\n", getpid());
	while (ac == 1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		signal(SIGINT, shandler);
		pause();
	}
}
