/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matej <matej@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:04:01 by matej             #+#    #+#             */
/*   Updated: 2024/11/19 23:17:48 by matej            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_a(char *str, t_l **a)
{
	int	value;
	char **args;

	args = ft_split((const char*)str, ' ');
	if(!args)
	{
		free(args);
		exit(1);
	}
	while(*args)
	{
		value = ft_atoi((const char*)*args);
		ft_lstadd_back(a, ft_lstnew(value));
		args++;
	}
}

t_l	*init_b()
{
	//int size;
	t_l *b;

	b = ft_lstnew(0);
	return b;
}