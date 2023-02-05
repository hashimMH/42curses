/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhook.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 18:44:20 by hmohamed          #+#    #+#             */
/*   Updated: 2023/02/05 19:16:21 by hmohamed         ###   ########.fr       */
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
	printf("Key code [%d]\n", keycode);
}

int	mousekey(int keycode, int x, int y, t_fac *st)
{
	x = 0;
	y = 0;
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