/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:26:54 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/08 16:59:59 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	a;

	a = 0;
	if (s && fd)
	{
		while (s[a] != '\0')
		{
			write (fd, &s[a], 1);
			a++;
		}
		write (fd, "\n", 1);
	}
}
