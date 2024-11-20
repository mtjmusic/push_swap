/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matej <matej@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:06:08 by matej             #+#    #+#             */
/*   Updated: 2024/11/19 15:21:28 by matej            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_args(char *argv)
{
	char *temp;

	temp = argv;
	while(*temp)
	{
		while(*temp && ft_isspace(*temp))
			temp++;
		if(*temp && !ft_isdigit(*temp))
			return (0);
		while(*temp && ft_isdigit(*temp))
			temp++;
	}
	return (1);
}