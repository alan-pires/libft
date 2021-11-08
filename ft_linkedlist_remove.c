/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_remove.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:44:07 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/07 22:31:38 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_linkedlist_remove(linkedlist *list, int val)
{
	node	*prev_node;
	node	*current_node;

	prev_node = NULL;
	current_node = list->begin;
	while (current_node != NULL && current_node->val != val)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}
	if (current_node != NULL)
	{
		if (list->end == current_node)
			list->end = prev_node;
		if (list->begin == current_node)
			list->begin = list->begin->next;
		else
			prev_node->next = current_node->next;
		free(current_node);
	}
	list->size--;
}
