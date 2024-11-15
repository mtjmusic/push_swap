/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matej <matej@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:53:38 by mmusic            #+#    #+#             */
/*   Updated: 2024/11/15 15:23:10 by matej            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_l **a, t_l **b)
{
    t_l *temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void sa(t_l *a)
{
    t_l *last = ft_lstlast(a);
    t_l *prev = ft_lstllast(a);
    //ft_putchar_fd('K', 1);
    swap(&last, &prev);
    
}