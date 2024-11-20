/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matej <matej@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:43:45 by mmusic            #+#    #+#             */
/*   Updated: 2024/11/19 23:17:10 by matej            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "ft_printf/libft/libft.h"
# include "ft_printf/ft_printf.h"

void swap(t_l **a, t_l **b);
void sa(t_l **a);
int	check_args(char *argv);
void	init_a(char *str, t_l **a);
t_l	*init_b();
void ft_lstprint(t_l *lst);

#endif