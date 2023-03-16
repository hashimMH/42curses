/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rout.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:04:37 by hmohamed          #+#    #+#             */
/*   Updated: 2023/03/15 21:25:30 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	pickfork(t_thr *thre)
{
	if (checkdead(thre))
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
	eating(thre);
	pthread_mutex_unlock(thre->forkl);
	pthread_mutex_unlock(thre->forkr);
	return (0);
}

int	eating(t_thr *thre)
{
	int	ptime;

	if (checkdead(thre))
		return (1);
	ptime = get_time() - thre->fl->time;
	thre->fttd = thre->fttd + thre->fl->ttd;
	printf("[%d] philo %d is eating\n", ptime, thre->index);
	usleep(thre->fl->tte * 1000);
	return (0);
}

int	sleaping(t_thr *flo)
{
	int	ptime;

	if (checkdead(flo))
		return (1);
	ptime = get_time() - flo->fl->time;
	printf("[%d] philo %d is sleeping\n", ptime, flo->index);
	usleep(flo->fl->tts * 1000);
	return (0);
}

int	thinking(t_thr *flo)
{
	int	ptime;

	if (checkdead(flo))
		return (1);
	ptime = get_time() - flo->fl->time;
	printf("[%d] philo %d is thinking\n", ptime, flo->index);
	return (0);
}

int	checkdead(t_thr *flo)
{
	int	ptime;

	ptime = get_time() - flo->fl->time;
	if (ptime >= flo->fttd)
		return (1);
	return (0);
}