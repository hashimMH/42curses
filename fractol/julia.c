/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:35:58 by hmohamed          #+#    #+#             */
/*   Updated: 2023/02/04 21:08:23 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	julia(int xs, int ys, t_fac *st)
{
	st->var->clr = 0x00FF00AA;
	st->var->row = 0;
	while (st->var->row < xs)
	{
		st->var->col = 0;
		while (st->var->col < ys)
		{
			st->var->c_re = st->var->jnx;
			st->var->c_im = st->var->jny;
			st->var->x = ((st->var->col - xs / 2.0) * 4.0 / xs)
				/ st->var->z + st->var->mx;
			st->var->y = ((st->var->row - ys / 2.0) * 4.0 / xs)
				/ st->var->z + st->var->my;
			st->var->iteration = 0;
			drawmandel(st->var, st->img);
		st->var->col++;
		}
		st->var->row++;
	}
	mlx_put_image_to_window(st->mlx->mlx, st->mlx->win, st->img->img, 0, 0);
}