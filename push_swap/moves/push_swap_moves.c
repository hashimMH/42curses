/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moves.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 17:47:41 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/16 15:55:37 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// void	h_moves(char *s, t_list **a, t_list **b)
// {
// 	int		i;
// 	int		j;

// 	i = ft_lstsize(*a);
// 	j = ft_lstsize(*b);
// 	if (i >= 2 && ft_strncmp(s, "sa", 2))
// 	{
// 		printf("ok im here");
// 		sw(a);
// 	}
// 	else if (j >= 2 && ft_strncmp(s, "sb", 2))
// 		sw(b);
// 	else if (j >= 1 && ft_strncmp(s, "pa", 2))
// 		pu(a, b);
// 	else if (i >= 1 && ft_strncmp(s, "pb", 2))
// 		pu(b, a);
// 	else if (i >= 2 && ft_strncmp(s, "ra", 2))
// 		rot(a);
// 	else if (j >= 2 && ft_strncmp(s, "rb", 2))
// 		rot(b);
// 	else if (i >= 2 && ft_strncmp(s, "rra", 2))
// 		rrot(a);
// 	else if (j >= 2 && ft_strncmp(s, "rrb", 2))
// 		rrot(b);
// }

void	sw(t_list **a)
{
	t_list	*temp;
	t_list	*t;

	temp = *a;
	t = temp ->next;
	temp ->next = t ->next;
	t->next = NULL;
	ft_lstadd_front(&temp, t);
	*a = temp;
}

void	pu(t_list **a, t_list **b)
{
	t_list	*temp;
	t_list	*t;

	temp = *b;
	t = temp->next;
	temp->next = NULL;
	ft_lstadd_front(a, temp);
	*b = t;
}

void	rot(t_list **a)
{
	t_list	*temp;
	t_list	*t;

	temp = *a;
	t = temp->next;
	*a = t;
	temp->next = NULL;
	ft_lstadd_back(a, temp);
}

void	rrot(t_list **a)
{
	t_list	*temp;
	t_list	*t;

	temp = *a;
	t = ft_lstlast(temp);
	while (temp ->next != t)
	{
		temp = temp -> next;
	}
	temp->next = NULL;
	ft_lstadd_front(a, t);
}
