/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:37:14 by hmohamed          #+#    #+#             */
/*   Updated: 2023/02/01 21:44:14 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	manbord(int xs, int ys, t_data img)
{
	t_tv	st;

	st.clr = 0x00FF00AA;
	st.max = 2;
	st.row = 0;
	while (st.row < xs)
	{
		st.col = 0;
		while (st.col < ys)
		{
			st.c_re = (st.col - ys / 2.0) * 4.0 / xs;
			st.c_im = (st.row - xs / 2.0) * 4.0 / xs;
			st.x = 0;
			st.y = 0;
			st.iteration = 0;
			while (st.x * st.x + st.y * st.y <= 4 && st.iteration < st.max)
			{
				st.x_new = st.x * st.x - st.y * st.y + st.c_re;
				st.y = 2 * st.x * st.y + st.c_im;
				st.x = st.x_new;
				st.iteration++;
			}
			if (st.iteration == st.max)
				my_mlx_pixel_put(&img, st.col, st.row, 0x00000000);
			else
				my_mlx_pixel_put(&img, st.col, st.row, st.clr * st.iteration);
		st.col++;
		}
		st.row++;
	}
}

// void	drawmandel(int row, int col)
// {

// }
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
