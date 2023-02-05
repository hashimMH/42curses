/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 21:02:55 by hmohamed          #+#    #+#             */
/*   Updated: 2023/02/05 19:10:02 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	parc_fractol(char **str, int an, t_tv *tv)
{
	if (an > 1)
	{
		if (ft_strncmp("mandelbrot", str[1], 10) == 0)
			return (1);
		else if (ft_strncmp("julia", str[1], 5) == 0)
		{
			if (atof(str[2]) <= 1.0 && atof(str[3]) >= -1.0)
			{
				tv->jnx = atof(str[2]);
				tv->jny = atof(str[3]);
				return (2);
			}
		}
	}
	write(2, "Error", 5);
	exit(1);
}

void	drawone(t_fac *st)
{
	if (st->var->id == 1)
		manbord(1080, 1080, st);
	else if (st->var->id == 2)
		julia(1080, 1080, st);
}
