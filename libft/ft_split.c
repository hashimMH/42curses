/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:27:29 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/02 21:06:44 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**temp;
	int		i;
	int		j;
	int		a;

	i = 0;
	j = 0;
	a = -1;
	temp = (char **)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (temp == NULL)
		return (NULL);
	while (s[i])
	{
		a++;
		if (s[i] != c)
			temp[j][a] = s[i];
		else
		{
			a = 0;
			j++;
		}
		i++;
	}
	temp[j + 1] = 0;
	return (temp);
}
