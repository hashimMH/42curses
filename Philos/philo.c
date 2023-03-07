/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:32:00 by hmohamed          #+#    #+#             */
/*   Updated: 2023/03/07 16:45:16 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

// int	pat(t_flo *fl)
// {
// 	if(fl->nop > 200 || fl->nop == -1 ||fl->notepme == -1 || fl->ttd == -1 || fl->tte == -1 || fl->tts == -1)
// }

int	parc(int x, char **s, t_flo *fl)
{
	if (x == 5 || x == 6)
	{
		fl->nop = ft_atoi(s[1]);
		fl->ttd = ft_atoi(s[2]);
		fl->tte = ft_atoi(s[3]);
		fl->tts = ft_atoi(s[4]);
		fl->time = get_time();
		if (x == 6)
			fl->notepme = ft_atoi(s[5]);
		else
			fl->notepme = INT_MAX;
	}
	else
	{
		write(2, "Error invalid number arqument\n", 30);
		return (1);
	}
	if (fl->nop > 200 || fl->nop == -1 || fl->notepme == -1
		|| fl->ttd == -1 || fl->tte == -1 || fl->tts == -1)
	{
		write(2, "Error invalid inputs\n", 21);
		return (1);
	}
	return (0);
}

void	*routine(void *h)
{
	t_flo		fl;
	int			ptime;

	fl = *(t_flo *)h;
	while (fl.notepme != 0)
	{
		ptime = get_time() - fl.time;
		printf("[%d] philo %d is eating\n", ptime, fl.index);
	}
	return (0);
}

void	excu(t_flo *fl)
{
	int			i;

	i = 0;
	while (i < fl->nop)
	{
		fl->index = i;
		if (pthread_create(&((fl->threds[i]).th), NULL, routine, fl) != 0)
			perror("Error");
		i++;
	}
	i = 0;
	while (i < fl->nop)
	{
		if (pthread_join(fl->threds[i].th, NULL) != 0)
			perror("Error");
		i++;
	}
	//printf("kashf almastoor\n");
}

int	main(int ac, char **av)
{
	t_flo	flo;
	int		p;

	p = parc(ac, av, &flo);
	flo.threds = malloc(flo.nop * sizeof(t_thr));
	if (p == 0)
	{
		excu(&flo);
		free(flo.threds);
		return (0);
	}
	else
		free(flo.threds);
	return (1);
}
