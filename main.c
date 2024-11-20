/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matej <matej@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:46:52 by mmusic            #+#    #+#             */
/*   Updated: 2024/11/19 23:17:22 by matej            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_l	*a;
	t_l *b;

    a = NULL;
	if (argc != 2)
        return (ft_printf("Input list of numbers as an argument!\n"), 1);
	if(!check_args(argv[1]))
        return (ft_printf("Input a valid list of numbers!\n"), 1);
	
	init_a(argv[1], &a);
	b = init_b();
	ft_lstprint(a);
	ft_lstprint(b);
}