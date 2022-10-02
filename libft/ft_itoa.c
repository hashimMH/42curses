/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:24:01 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/02 18:39:10 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	csign(int nb)
{
	char	c;

	c = '+';
	if (nb < 0)
		c = '-';
	return (c);
}

static char	*nbr(int n)
{
	char	*a;
	int		i;
	char	c;

	c = csign(n);
	a = NULL;
	if (n < 0)
		n = -1 * n;
	i = 0;
	while (n >= 10)
	{
		a[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	a[i++] = n + '0';
	if (c == '-')
		a[i++] = c;
	a[i] = 0;
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;
	char	*temp;
	int		i;
	int		j;

	j = 0;
	a = nbr(n);
	i = ft_strlen(a);
	temp = (char *)malloc(i * sizeof(char) + 1);
	while (i > 0)
	{
		temp[j] = a[i];
		i--;
		j++;
	}
	return (temp);
}
