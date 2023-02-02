/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:37:14 by hmohamed          #+#    #+#             */
/*   Updated: 2023/02/02 20:08:51 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	def_var(t_fac *fc)
{
	fc->var->max = 1000;
	fc->var->z = 1;
	fc->var->mx = 0;
	fc->var->my = 0;

}

void	manbord(int xs, int ys, t_fac *st)
{
	st->var->clr = 0x00FF00AA;
	st->var->row = 0;
	while (st->var->row < xs)
	{
		st->var->col = 0;
		while (st->var->col < ys)
		{
			st->var->c_re = (st->var->col - ys / 2.0) * 4.0 / xs / st->var->z;
			st->var->c_im = (st->var->row - xs / 2.0) * 4.0 / xs / st->var->z;
			st->var->x = 0;
			st->var->y = 0;
			st->var->iteration = 0;
			drawmandel(st->var, st->img);
		st->var->col++;
		}
		st->var->row++;
	}
}

// void	zmmanbord(int xs, int ys, t_fac *st)
// {

// 	st->var->clr = 0x00FF00AA;
// 	st->var->max = 1000;
// 	st->var->row = 0;
// 	while (st->var->row < xs)
// 	{
// 		st->var->col = 0;
// 		while (st->var->col < ys)
// 		{
// 			st->var->c_re = (st->var->col - ys / 2.0) * 4.0 / xs / st->var->z;
// 			st->var->c_im = (st->var->row - xs / 2.0) * 4.0 / xs / st->var->z;
// 			st->var->x = 0;
// 			st->var->y = 0;
// 			st->var->iteration = 0;
// 			drawmandel(st->var, st->img);
// 		st->var->col++;
// 		}
// 		st->var->row++;
// 	}
// }

void	drawmandel(t_tv	*re, t_data *img)
{
	while (re->x * re->x + re->y * re->y <= 4 && re->iteration < re->max)
	{
		re->x_new = re->x * re->x - re->y * re->y + re->c_re;
		re->y = 2 * re->x * re->y + re->c_im;
		re->x = re->x_new;
		re->iteration++;
	}
	if (re->iteration == re->max)
		my_mlx_pixel_put(img, re->col, re->row, 0x00000000);
	else
		my_mlx_pixel_put(img, re->col, re->row, re->clr * re->iteration);
}
// int main()
// {
// 	int height = 100;
// 	int width = 100;
// 	int max = 1000;
// 	for (int row = 0; row < height; row++) {
//     for (int col = 0; col < width; col++) {
//         double c_re = (col - width/2.0)*4.0/width;
//         double c_im = (row - height/2.0)*4.0/width;
//         double x = 0, y = 0;
//         int iteration = 0;
//         while (x*x+y*y <= 4 && iteration < max) {
//             double x_new = x*x - y*y + c_re;
//             y = 2*x*y + c_im;
//             x = x_new;
//             iteration++;
//         }
//         if (iteration < max) printf(".");
//         else printf(" ");
//     }
// }
// }
