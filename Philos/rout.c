/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rout.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:04:37 by hmohamed          #+#    #+#             */
/*   Updated: 2023/03/19 20:32:57 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	pickfork(t_thr *thre)
{
	while (*thre->frights != 0 || *thre->flefts != 0)
	{
		if (psleep(thre, 2))
			return (1);
	}
	while (*thre->fright == thre->index || *thre->fleft == thre->index)
	{
		if (psleep(thre, 2))
			return (1);
	}
	pthread_mutex_lock(thre->forkl);
	pthread_mutex_lock(thre->forkr);
	pthread_mutex_lock(&h);
	*thre->fright = thre->index;
	pthread_mutex_unlock(&h);
	pthread_mutex_lock(&h);
	*thre->fleft = thre->index;
	pthread_mutex_unlock(&h);
	pthread_mutex_lock(&h);
	*thre->frights = thre->index;
	pthread_mutex_unlock(&h);
	pthread_mutex_lock(&h);
	*thre->flefts = thre->index;
	pthread_mutex_unlock(&h);
	printing(thre, ptakefork);
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
	thre->fttd = ptime + thre->fl->ttd;
	printing(thre, peating);
	if (psleep(thre, thre->fl->tte))
		return (1);
	*thre->frights = 0;
	*thre->flefts = 0;
	return (0);
}

int	sleaping(t_thr *flo)
{
	if (checkdead(flo))
		return (1);
	printing(flo, psleeping);
	if (psleep(flo, flo->fl->tts))
		return (1);
	return (0);
}

int	thinking(t_thr *flo)
{
	if (checkdead(flo))
		return (1);
	printing(flo, pthinking);
	return (0);
}

int	checkdead(t_thr *flo)
{
	int	ptime;

	if (flo->fl->alive)
		return (1);
	ptime = get_time() - flo->fl->time;
	if (ptime >= flo->fttd)
	{
		printing(flo, pdead);
		return (1);
	}
	return (0);
}
