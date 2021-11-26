/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlinkedlist_remove.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:44:07 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/25 23:15:34 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlinkedlist_remove(d_linked_list *list, int val)
{
	d_node	*current_node;

	if (list->size > 0)
	{
		current_node = list->begin;
		if (list->begin->val == val)
		{
			list->begin = current_node->next;
			if (list->end == current_node)
				list->end = NULL;
			else
				list->begin->prev = NULL;
			free(current_node);
			list->size--;
		}
		else
		{
			current_node = current_node->next;
			while(current_node != NULL)
			{
				if (current_node->val == val)
				{
					current_node->prev->next = current_node->next;
					if (list->end == current_node)
						list->end = current_node->prev;
					else
						current_node->next->prev = current_node->prev;
					free(current_node);
					current_node = NULL;
					list->size--;
				}
				else
					current_node = current_node->next;
			}
		}
	}
}
