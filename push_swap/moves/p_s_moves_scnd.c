/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s_moves_scnd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:53:17 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/25 15:51:29 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **a)
{
	t_list	*temp;
	t_list	*t;

	temp = *a;
	t = temp->next;
	*a = t;
	temp->next = NULL;
	ft_lstadd_back(a, temp);
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	t_list	*temp;
	t_list	*t;

	temp = *b;
	t = temp->next;
	*b = t;
	temp->next = NULL;
	ft_lstadd_back(b, temp);
	write(1, "rb\n", 3);
}

void	rra(t_list **a)
{
	t_list	*temp;
	t_list	*t;

	temp = *a;
	t = ft_lstlast(temp);
	while (temp->next != t)
	{
		temp = temp->next;
	}
	temp->next = NULL;
	ft_lstadd_front(a, t);
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	t_list	*temp;
	t_list	*t;

	temp = *b;
	t = ft_lstlast(temp);
	while (temp->next != t)
	{
		temp = temp->next;
	}
	temp->next = NULL;
	ft_lstadd_front(b, t);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
