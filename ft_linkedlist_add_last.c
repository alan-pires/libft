/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_add_last.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:40:55 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/24 23:12:19 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**  **/

void	ft_dlinkedlist_add_last(d_linked_list *list, int val)
{
	node	*last_node;

	last_node = ft_snode_create(val);
	if (list->begin == NULL)
	{
		list->begin = last_node;
		list->end = last_node;
	}
	else
	{
		list->end->next = last_node;
		list->end = list->end->next;
	}
	list->size++;
}
