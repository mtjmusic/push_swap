/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matej <matej@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:46:52 by mmusic            #+#    #+#             */
/*   Updated: 2024/11/15 15:12:17 by matej            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main()
{
    t_l *list = NULL;
    ft_lstadd_back(&list, ft_lstnew("A"));
    ft_lstadd_back(&list, ft_lstnew("B"));
    ft_lstprint(list);
    sa(list);
    ft_lstprint(list);
}