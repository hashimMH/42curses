/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:02:12 by hmohamed          #+#    #+#             */
/*   Updated: 2023/02/01 21:38:37 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}
void printc()
{
		void	*mlx;
	t_data	img;
	void	*mlx_win;
	int		i;
	int		j;
	double	d;
	double l;

	j = 300;
	l = 100;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	img.img = mlx_new_image(mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
			&img.endian);
			while (l > 1)
			{
				d = 0;
				while (d < 360)
				{
					i = l * cos(d);
					j = l * sin(d);
					if ((int)(d * 100) % 2 == 0)
						my_mlx_pixel_put(&img, 500 + i, 500 + j, 0x00FF0000);
					else
						my_mlx_pixel_put(&img, 500 + i, 500 + j, 0x00800080);
					d += 0.1;
				}
				l -= 0.1;
			}
			l = 100;
				while (l > 1)
			{
				d = 0;
				while (d < 360)
				{
					i = l * cos(d);
					j = l * sin(d);
						my_mlx_pixel_put(&img, 1000 + i, 500 + j, 0x00FF0000);
					d += 0.1;
				}
				l -= 0.1;
			}
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}


int	main(int ac, char **av)
{
	void	*mlx;
	t_data	img;
	void	*mlx_win;

	(void)ac;
	(void)av;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1080, 1080, "Hello world!");
	img.img = mlx_new_image(mlx, 1080, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
			&img.endian);
	manbord(1080, 1080, img);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}




// int	main(void)
// {
// 	void	*mlx;
// 	t_data	img;
// 	void	*mlx_win;
// 	int		i;
// 	int		j;
// 	double	d;
// 	double l;

// 	j = 300;
// 	l = 100;

// 	mlx = mlx_init();
// 	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
// 	img.img = mlx_new_image(mlx, 1920, 1080);
// 	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
// 			&img.endian);
// 			while (l > 1)
// 			{
// 				d = 0;
// 				while (d < 360)
// 				{
// 					i = l * cos(d);
// 					j = l * sin(d);
// 					if ((int)(d * 100) % 2 == 0)
// 						my_mlx_pixel_put(&img, 500 + i, 500 + j, 0x00FF0000);
// 					else
// 						my_mlx_pixel_put(&img, 500 + i, 500 + j, 0x00800080);
// 					d += 0.1;
// 				}
// 				l -= 0.1;
// 			}
// 			l = 100;
// 				while (l > 1)
// 			{
// 				d = 0;
// 				while (d < 360)
// 				{
// 					i = l * cos(d);
// 					j = l * sin(d);
// 						my_mlx_pixel_put(&img, 1000 + i, 500 + j, 0x00FF0000);
// 					d += 0.1;
// 				}
// 				l -= 0.1;
// 			}
// 	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
// 	mlx_loop(mlx);
// }
