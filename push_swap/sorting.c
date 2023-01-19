/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:37:46 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/17 18:39:20 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort(t_list **a)
{
	t_list *b;
	t_list *tm;

	b = NULL;
	tm = *a;
	if (is_sorted(tm, b))
		printf("sorted\n");
	else
		printf("not_sorted");
	pb(&tm, &b);
	pb(&tm, &b);
	pa(&tm, &b);
	 if (!a)
	 	write(2, "error", 6);
	while (tm)
	{
		printf(" list val: %d", (tm->content));
		tm = tm->next;
	}
	while (b)
	{
		printf(" \nlist val of b: %d", (b->content));
		b = b->next;
	}
	printf("\n end of func");
}
