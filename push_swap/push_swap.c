/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:18:32 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/25 15:53:40 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_num(long num, t_list **a)
{
	if (num > 2147483647 || num < -2147483648)
	{
		return (1);
	}
	else
	{
		ft_lstadd_back(a, ft_lstnew(num));
	}
	return (0);
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

void	free_sp_ex(char **sp, t_list **a)
{
	int	i;

	i = 0;
	write(2, "Error\n", 6);
	ft_lstclear(a);
	while (sp[i])
	{
		free(sp[i]);
		i++;
	}
	free(sp);
	exit (1);
}

void	setnum(char **num)
{
	int		i;
	int		j;
	char	**sp;
	t_list	*a;

	i = 0;
	a = NULL;
	while (num[i])
	{
		j = 0;
		sp = ft_split(num[i], ' ');
		if (!sp[0])
			free_sp_ex(sp, &a);
		while (sp[j])
		{
			if (check_num(ft_atol(sp[j]), &a))
				free_sp_ex(sp, &a);
			j++;
		}
		free_sp(sp);
		i++;
	}
	check_dup(&a);
	sort(&a);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		setnum(av + 1);
	return (0);
}
