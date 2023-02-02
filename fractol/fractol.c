/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:02:12 by hmohamed          #+#    #+#             */
/*   Updated: 2023/02/02 20:13:25 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

int	key(int keycode, t_fac *st)
{
	if (keycode == 53)
	{
		mlx_destroy_window(st->mlx->mlx, st->mlx->win);
		exit(0);
	}
	printf("Key code [%d]\n", keycode);
	return (0);
}

int	mousekey(int keycode, int x, int y, t_fac *st)
{
	x = 0;
	y = 0;
	if (keycode == 5)
	{
		mlx_clear_window(st->mlx->mlx, st->mlx->win);
		st->var->z++;
		manbord(1080, 1080, st);
	}
	printf("Key code [%d]\n", keycode);
	return (0);
}

int	destroy(t_fac *f)
{
	(void)f;
	exit(0);
}

int	main(int ac, char **av)
{
	t_fac	f;
	t_data	img;
	t_mlx	mlx;
	t_tv	tv;

	(void)ac;
	(void)av;
	mlx.mlx = mlx_init();
	mlx.win = mlx_new_window(mlx.mlx, 1080, 1080, "Hello world!");
	img.img = mlx_new_image(mlx.mlx, 1080, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
			&img.endian);
	f.img = &img;
	f.mlx = &mlx;
	f.var = &tv;
	def_var(&f);
	manbord(1080, 1080, &f);
	mlx_put_image_to_window(f.mlx->mlx, f.mlx->win, f.img->img, 0, 0);
	mlx_hook(f.mlx->win, 2, 0, key, &f);
	mlx_mouse_hook(f.mlx->win, mousekey, &f);
	mlx_hook(f.mlx->win, 17, 0, destroy, &f);
	mlx_loop(f.mlx->mlx);
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
