/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:18:32 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/06 18:51:11 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_num(long num, t_list **a)
{

	if (num > 2147483647 || num < -2147483648)
	{
		write(2, "error", 6);
		ft_lstclear(a);
		exit(0);
	}
	else
	{
		ft_lstadd_back(a, ft_lstnew(num));
	}
	return ;
}

void	free_sp(char **sp)
{
	int	i;

	i = 0;
	while (sp[i])
	{
		free(sp[i]);
		i++;
	}
	free(sp);
}

void	setnum(char **num)
{
	int		i;
	int		j;
	char	**sp;
	t_list	*a;
	t_list *tm;

	i = 0;
	a = NULL;
	while (num[i])
	{
		j = 0;
		sp = ft_split(num[i], ' ');
		if (!sp[0])
			write(2, "error", 6);
		while (sp[j])
		{
			//printf("sp : %s   ", sp[j]);
			check_num(ft_atol(sp[j]), &a);
			j++;
		}
		free_sp(sp);
		i++;
	}
	check_dup(&a);
	tm = a;
	// if (!a)
	// 	write(2, "error", 6);
	while (tm)
	{
		printf(" list val: %d", (tm->content));
		tm = tm->next;
	}	
	printf("\n end of func");
}

int	main(int ac, char **av)
{
	if (ac > 1)
		setnum(av + 1);
	return (0);
}
