/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstllast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matej <matej@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:16:30 by matej             #+#    #+#             */
/*   Updated: 2024/11/15 15:25:58 by matej            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_l	*ft_lstllast(t_l *lst)
{
	t_l	*temp;
	t_l *prev;

	if (!lst || !lst->next)
		return (NULL);
	prev = NULL;
	temp = lst;
	while (temp->next)
	{
		prev = temp;
		temp = temp->next;
	}
	return (prev);
}