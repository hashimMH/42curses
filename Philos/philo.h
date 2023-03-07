/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:32:49 by hmohamed          #+#    #+#             */
/*   Updated: 2023/03/07 16:39:14 by hmohamed         ###   ########.fr       */
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

typedef struct s_thr
{
	int			frone;
	int			frtwo;
	pthread_t	th;
}				t_thr;

typedef struct s_flo
{
	int				nop;
	int				ttd;
	int				tte;
	int				tts;
	int				notepme;
	int				index;
	long long		time;
	t_thr			*threds;
}				t_flo;

int			ft_atoi(const char *str);
long long	get_time(void);

#endif