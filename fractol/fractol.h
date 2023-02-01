/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 14:49:49 by hmohamed          #+#    #+#             */
/*   Updated: 2023/02/01 21:36:14 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include "mlx/mlx.h"
# include "libft/libft.h"
# include "complex.h"

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct dv
{
	double			c_re;
	double			c_im;
	int				max;
	int				row;
	int				col;
	unsigned int	clr;
	double			x;
	double			y;
	int				iteration;
	double			x_new;
}				t_tv;

void	manbord(int xs, int ys, t_data img);
void	my_mlx_pixel_put(t_data *data, int x, int y, int color);

#endif