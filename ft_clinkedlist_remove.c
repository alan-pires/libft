/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clinkedlist_remove.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:40:28 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/28 16:04:05 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clinkedlist_remove(c_list *list, int val)
{
	if (list->size > 0)
	{
		c_node *node; 
		
		node = list->begin;
		if (list->begin->val == val)
		{
			if (list->begin == list->end)
			{
				list->begin = NULL;
				list->end = NULL;
			}
			else 
			{
				list->begin = node->next;
				list->begin->prev = list->end;
				list->end->next = list->begin;
			}
			ft_clinkedlist_destroy(&node);
			list->size--;
		}
		else
		{
			node = node->next;
			while (node != list->begin)
			{
				if (node->val == val)
				{
					if (list->end == node)
						list->end = node->prev;
					node->prev->next = node->next;
					node->next->prev = node->prev;
					ft_clinkedlist_destroy(&node);
					list->size--;
						break;
				}
				else
					node = node->next;
			}
		}
	}
}
