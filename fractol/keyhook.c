/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhook.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:44:20 by hmohamed          #+#    #+#             */
/*   Updated: 2023/02/05 20:33:29 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	key(int keycode, t_fac *st)
{
	if (keycode == 53)
	{
		mlx_destroy_window(st->mlx->mlx, st->mlx->win);
		exit(0);
	}
	else if (keycode == 124)
	{
		st->var->mx = st->var->mx + 1 / st->var->z;
		drawone(st);
	}
	else if (keycode == 123)
	{
		st->var->mx = st->var->mx - 1 / st->var->z;
		drawone(st);
	}
	else if (keycode == 126)
	{
		st->var->my = st->var->my - 1 / st->var->z;
		drawone(st);
	}
	else
		hook(keycode, st);
	return (0);
}

void	hook(int keycode, t_fac *st)
{
	if (keycode == 125)
	{
		st->var->my = st->var->my + 1 / st->var->z;
		drawone(st);
	}
	else if (keycode == 46)
	{
		st->var->max = st->var->max + 20;
		drawone(st);
	}
	else if (keycode == 37)
	{
		st->var->max = st->var->max - 20;
		drawone(st);
	}
	else
		color(keycode, st);
	printf("Key code [%d]\n", keycode);
}

void	color(int keycode, t_fac *st)
{
	if (keycode == 18)
	{
		st->var->clr = 0x8609b8;
		drawone(st);
	}
	else if (keycode == 19)
	{
		st->var->clr = 0xb2b809;
		drawone(st);
	}
	else if (keycode == 20)
	{
		st->var->clr = 0x09b838;
		drawone(st);
	}
	else if (keycode == 29)
	{
		st->var->clr = 0x00FF00AA;
		drawone(st);
	}
	else if (keycode == 21)
	{
		st->var->clr = 0x09a9b8;
		drawone(st);
	}
}

int	mousekey(int keycode, int x, int y, t_fac *st)
{
	printf("x = %d \n y = %d \n", x, y);
	if (keycode == 5)
	{
		st->var->z = st->var->z * 2;
		printf("z = : %f", st->var->z);
		drawone(st);
	}
	else if (keycode == 4)
	{
		st->var->z = st->var->z / 2;
		drawone(st);
	}
	printf("Key code [%d]\n", keycode);
	return (0);
}

int	destroy(t_fac *f)
{
	(void)f;
	exit(0);
}
