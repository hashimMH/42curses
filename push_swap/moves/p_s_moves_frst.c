/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_moves_frst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 17:47:41 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/17 16:53:45 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sa(t_list **a)
{
	t_list *temp;
	t_list *t;

	temp = *a;
	t = temp->next;
	temp->next = t->next;
	t->next = NULL;
	ft_lstadd_front(&temp, t);
	*a = temp;
	write(1, "sa\n", 3);
}

void sb(t_list **a)
{
	t_list *temp;
	t_list *t;

	temp = *a;
	t = temp->next;
	temp->next = t->next;
	t->next = NULL;
	ft_lstadd_front(&temp, t);
	*a = temp;
	write(1, "sb\n", 3);
}

void ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}

void pa(t_list **a, t_list **b)
{
	t_list *temp;
	t_list *t;

	temp = *b;
	t = temp->next;
	temp->next = NULL;
	ft_lstadd_front(a, temp);
	*b = t;
	write(1, "pa\n", 3);
}

void pb(t_list **a, t_list **b)
{
	t_list *temp;
	t_list *t;

	temp = *a;
	t = temp->next;
	temp->next = NULL;
	ft_lstadd_front(b, temp);
	*a = t;
	write(1, "pb\n", 3);
}
