/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:33:49 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/06 17:34:15 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *temp;
	size_t j;
	size_t i;

	i = ft_strlen(s);
	if (start > i)
	{
		temp = (char *)malloc(sizeof(char) * 1);
		temp[0] = 0;
		return (temp);
	}
	if (len < i)
		temp = (char *)malloc(len + 1);
	else
		temp = (char *)malloc((i - (size_t)start));
	if (temp == NULL)
		return (NULL);
	j = 0;
	while (j < len)
		temp[j++] = s[start++];
	temp[j] = 0;
	return (temp);
}
