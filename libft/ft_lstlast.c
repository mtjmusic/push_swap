/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matej <matej@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:14:37 by mmusic            #+#    #+#             */
/*   Updated: 2024/11/15 10:11:10 by matej            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_l	*ft_lstlast(t_l *lst)
{
	t_l	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}
