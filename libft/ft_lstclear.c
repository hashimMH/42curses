/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmohamed <hmohamed@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:27:59 by hmohamed          #+#    #+#             */
/*   Updated: 2022/10/06 14:10:17 by hmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;
    t_list *list;

    list = *lst;
    if (!*lst)
        return;
    while (list)
    {
        temp = list->next;
        ft_lstdelone(list, del);
        list = temp;
    }
    *lst = NULL;
}