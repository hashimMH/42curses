/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:18:32 by hmohamed          #+#    #+#             */
/*   Updated: 2022/12/23 16:43:01 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// void	setnum(int num)
// {
// 	t_list	a;
	
	
// }

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac <= 1)
		return (0);
	while (i < ac)
	{
		write(1, &av[i][1], 1);
	}
}
