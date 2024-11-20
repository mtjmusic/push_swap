/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matej <matej@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:53:38 by mmusic            #+#    #+#             */
/*   Updated: 2024/11/19 14:43:02 by matej            ###   ########.fr       */
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

void sa(t_l **a) // Change parameter to t_l **
{
    if (a && *a && (*a)->next) // Check if there are at least two elements
    {
        t_l *first = *a; // First element
        t_l *temp = first;
        t_l *second = (*a)->next; // Second element
        swap(&first, &second); // Swap the first two elements
        *a = temp; // Update the head of the list
    }
}

/* void sa(t_l *a)
{
    t_l *last = ft_lstlast(a);
    t_l *prev = ft_lstllast(a);
    //ft_putchar_fd('K', 1);
    swap(&last, &prev);
    
} */