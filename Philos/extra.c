/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:04:20 by hmohamed          #+#    #+#             */
/*   Updated: 2023/03/17 20:43:53 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	forkdis(t_thr *flo)
{

	if (flo->index == flo->fl->nop)
	{
		flo->fright = &flo->fl->froks[flo->index - 1];
		flo->fleft = &flo->fl->froks[0];
	}
	else
	{
		flo->fleft = &flo->fl->froks[flo->index - 1];
		flo->fright = &flo->fl->froks[flo->index];
	}
	*flo->fright = 0;
	*flo->fleft = 0;
	forkdiss(flo);
}

void	forkdiss(t_thr *flo)
{

	if (flo->index == flo->fl->nop)
	{
		flo->frights = &flo->fl->frokss[flo->index - 1];
		flo->flefts = &flo->fl->frokss[0];
	}
	else
	{
		flo->flefts = &flo->fl->frokss[flo->index - 1];
		flo->frights = &flo->fl->frokss[flo->index];
	}
	*flo->frights = 0;
	*flo->flefts = 0;
}

void	mutexdis(t_thr *thre)
{
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
}
