/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:37:46 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/20 19:28:18 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **a)
{
	t_list	*b;
	t_list	*tm;
	int i;

	b = NULL;
	tm = *a;
	i = ft_lstsize(tm);
	if (i == 2 && !is_sorted(tm, b))
		sa(&tm);
	else if (i == 3 && !is_sorted(tm, b))
		sort_three(&tm);
	else if (i == 4 && !is_sorted(tm, b))
		sort_four(&tm, &b);
	else if (i == 5 && !is_sorted(tm, b))
		sort_five(&tm, &b);
	if (is_sorted(tm, b))
		 printf("sooorted");
	while (tm)
	{
		// printf("num : %d ", tm->content);
		tm = tm->next;
	}
	
	// printf("\n end of func");
}
