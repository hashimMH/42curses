/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:21:46 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/09 19:41:26 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return (NULL);
	str = malloc(count * size);
	if (!str)
		return (0);
	ft_bzero(str, (count * size));
	return (str);
}
