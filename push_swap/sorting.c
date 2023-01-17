/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:37:46 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/16 15:57:06 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_list **a)
{
	//t_list	*b;
	t_list	*tm;

	// b = NULL;
	tm = *a;
	 rot(&tm);
	// if (!a)
	// 	write(2, "error", 6);
	while (tm)
	{
		printf(" list val: %d", (tm->content));
		tm = tm->next;
	}	
	printf("\n end of func");
}
