/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:20:34 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/02 17:21:22 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	checkspace(char h)
{
	if (h == '\f' || h == '\t'
		|| h == ' ' || h == '\n' || h == '\r' || h == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	c;
	int	num;

	i = 0;
	c = 1;
	num = 0;
	while (str[i] != '\0' && checkspace(str[i]))
		i++;
	if (str == 0)
		return (0);
	if (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			c = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (c * num);
}
