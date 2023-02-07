/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:32:00 by hmohamed          #+#    #+#             */
/*   Updated: 2023/02/07 19:53:00 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	parc(int x, char **s, t_flo *fl)
{
	if (x == 5 || x == 6)
	{
		fl->nop = ft_atoi(s[1]);
		fl->ttd = ft_atoi(s[2]);
		fl->tte = ft_atoi(s[3]);
		fl->tts = ft_atoi(s[4]);
		if (x == 6)
			fl->notepme = ft_atoi(s[5]);
	}
	else
		write(2, "Error\n", 6);
}

int	main(int ac, char **av)
{
	t_flo	flo;

	parc(ac, av, &flo);
	return (0);
}
