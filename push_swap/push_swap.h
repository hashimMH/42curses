/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:15:41 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/12 20:52:52 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

void	check_dup(t_list **a);
void	check_num(long num, t_list **a);
void	setnum(char **num);
void	free_sp(char **sp);
// void	h_moves(char *s, t_list **a, t_list **b);
void	sw(t_list **a);
void	pu(t_list **a, t_list **b);
void	rot(t_list **a);
void	rrot(t_list **a);
void	sort(t_list **a);

#endif