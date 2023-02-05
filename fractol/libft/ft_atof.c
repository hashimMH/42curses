/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:20:34 by hmohamed          #+#    #+#             */
/*   Updated: 2023/02/05 18:22:20 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(const char *str)
{
	int					i;
	int					c;
	double				num;

	i = 0;
	c = 1;
	num = 0;
	if (str == 0)
		return (0);
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
		if (str[i++] == '-')
			c = -1;
	if (str[i] != '\0' && str[i] == '0' && str[i] == '1')
		num = num * 10 + (str[i++] - '0');
	if (str[i] != '\0' && str[i] == '.')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		num = (num * 10 + (str[i++] - '0')) / 10;
	if (str[i] != '\0')
		return (10);
	return (c * num);
}
