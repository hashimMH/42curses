/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:28:52 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/02 17:28:53 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dp;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dp = (char *)malloc(i * sizeof(char) + 1);
	i = 0;
	while (src[i])
	{
		dp[i] = src[i];
		i++;
	}
	dp[i] = '\0';
	return (dp);
}
