/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:24:01 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/07 14:07:35 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count(int n)
{
	size_t	i;

	if (n > 0)
		i = 0;
	else
		i = 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*temp;
	long	num;
	size_t	i;

	i = count(n);
	num = n;
	if (num > 0)
		num = 1 * num;
	else
		num = -num;
	temp = (char *)malloc(i + 1);
	if (!temp)
		return (0);
	temp[i--] = '\0';
	while (num > 0)
	{
		temp[i--] = num % 10 + '0';
		num /= 10;
	}
	if (i == 0 && temp[1] == '\0')
		temp[i] = '0';
	else if (i == 0 && temp[1] != '\0')
		temp[i] = '-';
	return (temp);
}
