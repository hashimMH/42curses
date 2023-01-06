/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_lst.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:37:22 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/06 18:57:30 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_dup(t_list **a)
{
	t_list	*p;
	t_list	*pp;

	p = *a;
	while (p ->next)
	{
		pp = p ->next;
		while (pp)
		{
			if (p ->content == pp ->content)
			{
				write(2, "Error\n", 6);
				ft_lstclear(a);
				exit(0);
			}
			pp = pp ->next;
		}
		p = p ->next;
	}
}
