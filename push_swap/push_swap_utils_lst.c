/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_lst.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:37:22 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/17 18:34:28 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_dup(t_list **a)
{
	t_list *p;
	t_list *pp;

	p = *a;
	while (p->next)
	{
		pp = p->next;
		while (pp)
		{
			if (p->content == pp->content)
			{
				write(2, "Error\n", 6);
				ft_lstclear(a);
				exit(0);
			}
			pp = pp->next;
		}
		p = p->next;
	}
}

int is_sorted(t_list *a, t_list *b)
{
	int c_value;
	t_list *tm;

	tm = a;
	while (tm)
	{
		c_value = tm->content;
		if (tm->next != NULL)
			if (c_value > tm->next->content)
				return (0);
		tm = tm->next;
	}
	if (b != NULL)
		return (0);
	return (1);
}
