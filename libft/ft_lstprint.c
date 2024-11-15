/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matej <matej@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:23:28 by matej             #+#    #+#             */
/*   Updated: 2024/11/15 15:11:05 by matej            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstprint(t_l *lst)
{
	int i = 1;
	while(lst)
	{
		ft_putstr_fd("item ", 1);
		ft_putnbr_fd(i, 1);
		ft_putstr_fd("\t", 1);
		ft_putendl_fd(lst->content, 1);
		lst = lst->next;
		i++;
	}
}