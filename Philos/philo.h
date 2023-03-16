/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:32:49 by hmohamed          #+#    #+#             */
/*   Updated: 2023/03/15 21:00:57 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <pthread.h>
# include <sys/time.h>



typedef struct s_flo
{
	int				nop;
	int				ttd;
	int				tte;
	int				tts;
	int				notepme;
	long long		time;
	pthread_mutex_t	*mutex;
}				t_flo;

typedef struct s_thr
{
	pthread_mutex_t	*forkr;
	pthread_mutex_t	*forkl;
	int				index;
	int				fttd;
	pthread_t		th;
	t_flo			*fl;
}				t_thr;

int			ft_atoi(const char *str);
long long	get_time(void);
int			pickfork(t_thr *thre);
int			eating(t_thr *thre);
int			sleaping(t_thr *flo);
int			thinking(t_thr *flo);
int			checkdead(t_thr *flo);

#endif