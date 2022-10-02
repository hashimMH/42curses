/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:32:39 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/02 17:33:36 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sr;
	char	*temp;
	int		i;
	int		j;
	int		a;

	sr = (char *)s1;
	i = 0;
	a = 0;
	j = ft_strlen(sr);
	if (j <= 0)
		return (NULL);
	temp = (char *)malloc(sizeof(char) * j);
	while (i < j && ft_strchr(set, sr[i]) != 0)
		i++;
	while (j > i && ft_strchr(set, sr[j]) != 0)
		j--;
	while (i < j)
	{
		temp[a] = sr[i];
		a++;
		i++;
	}
	return (temp);
}
