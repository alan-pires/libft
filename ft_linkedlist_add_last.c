/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_add_last.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:40:55 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/07 14:57:47 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_linkedlist_add_last(linkedlist *list, int val)
{
	node	*last_node;
	node	*current_node;

	last_node = ft_snode_create(val);
	if (list->begin == NULL)
		list->begin = last_node;
	else
	{
		current_node = list->begin;
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = last_node;
	}
}