/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   med_num.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:37:15 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/21 16:31:02 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_rest(t_list **a, t_list **b, int size)
{
	int	i;
	int	j;
	int z;
	// t_list *tm;

	i = 0;
	z = size;
	while (i < size)
	{
		j = small_num(*a);
		if (j == 2)
			sa(a);
		else
		{
			if (j <= z / 2)
				while (j-- > 1)
					ra(a);
			else
				while (j++ <= z && z >= 2)
					rra(a);
		}
		pb (a, b);
		i++;
		z--;
	}
	while (size--)
		pa(a, b);
	// tm = *a;
	// while (tm)
	// {
	// 	printf("num : %d ", tm->content);
	// 	tm = tm->next;
	// }
}
