/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rout.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:04:37 by hmohamed          #+#    #+#             */
/*   Updated: 2023/03/16 18:40:39 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int pickfork(t_thr *thre)
{

	if (thre->fl->alive)
		return (1);
	if (checkdead(thre) || thre->fl->alive)
		return (1);
	if (thre->index == thre->fl->nop)
	{
		thre->forkr = &thre->fl->mutex[thre->index - 1];
		thre->forkl = &thre->fl->mutex[0];
	}
	else
	{
		thre->forkl = &thre->fl->mutex[thre->index - 1];
		thre->forkr = &thre->fl->mutex[thre->index];
	}
	pthread_mutex_lock(thre->forkl);
	pthread_mutex_lock(thre->forkr);
	printing(thre, ptakefork);
	eating(thre);
	pthread_mutex_unlock(thre->forkl);
	pthread_mutex_unlock(thre->forkr);
	return (0);
}

int eating(t_thr *thre)
{
	int	ptime;
	if (thre->fl->alive)
		return (1);

	if (checkdead(thre) || thre->fl->alive)
		return (1);
	ptime = get_time() - thre->fl->time;
	thre->fttd = ptime + thre->fl->ttd;
	printing(thre, peating);
	// printf("[%d] philo %d is eating\n", ptime, thre->index);
	usleep(thre->fl->tte * 1000);
	return (0);
}

int sleaping(t_thr *flo)
{
	// int	ptime;

	if (flo->fl->alive)
		return (1);

	if (checkdead(flo) || flo->fl->alive)
		return (1);
	// ptime = get_time() - flo->fl->time;
	printing(flo, psleeping);
	// printf("[%d] philo %d is sleeping\n", ptime, flo->index);
	usleep(flo->fl->tts * 1000);
	return (0);
}

int thinking(t_thr *flo)
{
	// int	ptime;
	if (flo->fl->alive)
		return (1);

	if (checkdead(flo) || flo->fl->alive)
		return (1);
	// ptime = get_time() - flo->fl->time;
	printing(flo, pthinking);
	// printf("[%d] philo %d is thinking\n", ptime, flo->index);
	return (0);
}

int checkdead(t_thr *flo)
{
	int ptime;

	pthread_mutex_lock(&flo->fl->dead);
	ptime = get_time() - flo->fl->time;
	if (ptime >= flo->fttd)
	{
		printing(flo, pdead);
		pthread_mutex_unlock(&flo->fl->dead);
		return (1);
	}
	pthread_mutex_unlock(&flo->fl->dead);
	return (0);
}