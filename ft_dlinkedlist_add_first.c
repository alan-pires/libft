/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlinkedlist_add_first.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:48:34 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/24 22:43:40 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlinkedlist_add_first(d_linked_list *list, int val)
{
	d_node	*first_node;

	first_node = ft_dnode_create(val);
	first_node->next = list->begin;
	if (list->size == 0)
		list->end = first_node;
	else
		list->begin->prev = first_node;
	list->begin = first_node;
	list->size++;
}

