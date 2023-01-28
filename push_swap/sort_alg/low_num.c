/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:06:00 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/25 15:47:31 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_list **a)
{
	t_list	*tm;
	t_list	*nxt;
	t_list	*lst;

	tm = *a;
	nxt = tm->next;
	lst = nxt->next;
	if ((tm->content > nxt->content) && (lst->content > tm->content))
		sa(a);
	else if ((tm->content > lst->content) && (lst->content > nxt->content))
		ra(a);
	else if ((tm->content > nxt->content) && (nxt->content > lst->content))
	{
		sa(a);
		rra(a);
	}
	else if ((tm->content < nxt->content) && (nxt->content > lst->content))
	{
		rra(a);
		sa(a);
	}
}

void	sort_five(t_list **a, t_list **b)
{
	int	first;

	first = small_num(*a);
	if (first == 2)
		sa(a);
	else if (first == 3)
	{
		ra(a);
		ra(a);
	}
	else if (first == 4)
	{
		rra(a);
		rra(a);
	}
	else if (first == 5)
		rra(a);
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}

int	small_num(t_list *a)
{
	t_list	*am;
	t_list	*nxt;
	int		count;

	am = a;
	count = 1;
	while (am)
	{
		nxt = a;
		while (nxt && (am->content <= nxt->content))
			nxt = nxt->next;
		if (!nxt)
			return (count);
		count++;
		am = am->next;
	}
	return (count);
}

void	sort_four(t_list **a, t_list **b)
{
	int	first;

	first = small_num(*a);
	if (first == 2)
		sa(a);
	else if (first == 3)
	{
		ra(a);
		ra(a);
	}
	else if (first == 4)
		rra(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

int	big_num(t_list *a)
{
	t_list	*am;
	t_list	*nxt;
	int		count;

	am = a;
	count = 1;
	while (am)
	{
		nxt = a;
		while (nxt && (am->content >= nxt->content))
			nxt = nxt->next;
		if (!nxt)
			return (count);
		count++;
		am = am->next;
	}
	return (count);
}
