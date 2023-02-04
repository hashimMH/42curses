/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 21:02:55 by hmohamed          #+#    #+#             */
/*   Updated: 2023/02/04 21:38:11 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	parc_fractol(char **str, int an)
{
	if (an > 1)
	{
		if (ft_strncmp("mandelbrot", str[1], 10) == 0)
			return (1);
		else if (ft_strncmp("julia", str[1], 5) == 0)
			return (2);
	}
	write(2, "Error", 5);
	exit(1);
}
