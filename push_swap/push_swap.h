/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:15:41 by hmohamed          #+#    #+#             */
/*   Updated: 2023/01/17 17:23:48 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft/libft.h"

void check_dup(t_list **a);
int is_sorted(t_list **a, t_list **b);
void check_num(long num, t_list **a);
void setnum(char **num);
void free_sp(char **sp);
// void	h_moves(char *s, t_list **a, t_list **b);
void sa(t_list **a);
void sb(t_list **b);
void ss(t_list **a, t_list **b);
void pa(t_list **a, t_list **b);
void pb(t_list **a, t_list **b);
void ra(t_list **a);
void rb(t_list **b);
void rra(t_list **a);
void rrb(t_list **b);
void rrr(t_list **a, t_list **b);
void sort(t_list **a);

#endif