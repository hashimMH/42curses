/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:32:39 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/02 20:59:42 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cchr(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int		i;
	int		j;
	int		a;

	i = 0;
	a = 0;
	j = ft_strlen(s1);
	while (s1[i] && cchr(s1[i], set))
		i++;
	while (j > i && cchr(s1[j - 1], set))
		j--;
	temp = (char *)malloc(sizeof(char) * (j - i) + 1);
	while (i < j)
	{
		temp[a] = s1[i];
		a++;
		i++;
	}
	temp[a] = 0;
	return (temp);
}
