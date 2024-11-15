/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matej <matej@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:23:53 by mmusic            #+#    #+#             */
/*   Updated: 2024/11/15 15:29:16 by matej            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_l **lst, t_l *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	new->prev = NULL;
	*lst = new;
}

/* int main()
{
	t_l *list = NULL;
	t_list *node1 = ft_lstnew("Hello");
	ft_lstadd_front(&list, node1);
	if (list != node1) {
		printf("Test case 1 failed: The head of 
        the list should point to the new node.\n");
		return (1);
	}
	if (list->next != NULL) {
		printf("Test case 1 failed: The next
         pointer of the new node should be NULL.\n");
		return (1);
	}

	t_list *node2 = ft_lstnew("World");
	ft_lstadd_front(&list, node2);
	if (list != node2) {
		printf("Test case 2 failed: 
        The head of the list should point to the new node.\n");
		return (1);
	}
	if (list->next != node1) {
		printf("Test case 2 failed: 
        The next pointer of the new node should point to the previous head.\n");
		return (1);
	}

	ft_lstclear(&list, free);

	printf("All test cases passed successfully.\n");
	return (0);
} */
