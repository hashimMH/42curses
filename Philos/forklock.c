/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forklock.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:16:27 by hmohamed          #+#    #+#             */
/*   Updated: 2023/03/19 17:21:03 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int readforks(t_thr *flo)
{
	int i;
	int j;
	
	pthread_mutex_lock(&h);
	i = *flo->frights;
	pthread_mutex_unlock(&h);
	pthread_mutex_lock(&h);
	j = *flo->flefts;
	pthread_mutex_unlock(&h);
	if(i != 0 || j != 0)
		return (1);
	return (0);
}
int readfork(t_thr *flo)
{
	int i;
	int j;
	
	pthread_mutex_lock(&h);
	i = *flo->fright;
	pthread_mutex_unlock(&h);
	pthread_mutex_lock(&h);
	j = *flo->fleft;
	pthread_mutex_unlock(&h);
	if(i == flo->index || j == flo->index)
		return (1);
	return (0);
}