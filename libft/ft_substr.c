/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:33:49 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/02 20:07:38 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sr;
	char			*temp;
	unsigned int	i;
	size_t			j;

	i = start;
	sr = (char *)s;
	if (start > (unsigned int)ft_strlen(s))
	{
		temp = (char *)malloc(sizeof(char) * 1);
		temp[0] = 0;
		return (temp);
	}
	temp = (char *)malloc(sizeof(char) * len + 1);
	if (temp == NULL)
		return (NULL);
	j = 0;
	while (j < (unsigned int)len)
	{
		temp[j] = sr[i];
		i++;
		j++;
	}
	temp[j] = 0;
	return (temp);
}
