/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   med_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:37:15 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/24 18:50:28 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort_rest(t_list **a, t_list **b, int size)
{
	int i;
	int j;
	int z;
	// t_list *tm;

	i = 0;
	z = size;
	move_rest(a, b, size);
	while (i < size)
	{
		j = big_num(*b);
		if (j == 2)
			sb(b);
		else
		{
			if (j <= z / 2)
				while (j-- > 1)
					rb(b);
			else
				while (j++ <= z && z >= 2)
					rrb(b);
		}
		pa(a, b);
		i++;
		z--;
	}
	// while (size--)
	// 	pa(a, b);
	// tm = *a;
	// while (tm)
	// {
	// 	printf("num : %d ", tm->content);
	// 	tm = tm->next;
	// }
}

void move_rest(t_list **a, t_list **b, int size)
{
	int i;
	int j;
	int z;
	int big;
	int small;
	// t_list *tm;

	i = 0;
	z = size;
	big = big_val(*a) / 15;
	while (i < size)
	{
		small = small_val(*a);
		j = small_avg(*a, small, small + big);
		if (j <= z / 2)
			while (j-- > 1)
				ra(a);
		else
			while (j++ <= z && z >= 2)
				rra(a);
		pb(a, b);
		i++;
		z--;
	}
	// while (size--)
	// 	pa(a, b);
	// tm = *a;
	// while (tm)
	// {
	// 	printf("num : %d ", tm->content);
	// 	tm = tm->next;
	// }
}

int big_val(t_list *a)
{
	t_list *am;
	t_list *nxt;

	am = a;
	while (am)
	{
		nxt = a;
		while (nxt && (am->content >= nxt->content))
			nxt = nxt->next;
		if (!nxt)
			return (am->content);
		am = am->next;
	}
	return (0);
}

int small_val(t_list *a)
{
	t_list *am;
	t_list *nxt;
	int count;

	am = a;
	count = 1;
	while (am)
	{
		nxt = a;
		while (nxt && (am->content <= nxt->content))
			nxt = nxt->next;
		if (!nxt)
			return (am->content);
		count++;
		am = am->next;
	}
	return (0);
}

int small_avg(t_list *a, int s, int e)
{
	t_list *am;
	int count;

	am = a;
	count = 1;
	while (am)
	{
		if (am->content >= s && am->content <= e)
			return (count);
		count++;
		am = am->next;
	}
	return (0);
}