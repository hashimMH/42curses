/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:32:49 by hmohamed          #+#    #+#             */
/*   Updated: 2023/02/07 19:50:01 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_flo
{
	int	nop;
	int	ttd;
	int	tte;
	int	tts;
	int	notepme;

}				t_flo;

int	ft_atoi(const char *str);

#endif