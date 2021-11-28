/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clinkedlist_add_first.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:48:34 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/27 16:06:50 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clinkedlist_add_first(c_list *list, int val)
{
	c_node	*first_node;

	first_node = ft_cnode_create(val);
	if (list->size == 0)
		list->end = first_node;
	else
	{
		first_node->next = list->begin;
		list->begin->prev = first_node;
		first_node->prev = list->end;
		list->end->next = first_node;
	}
	list->begin = first_node;
	list->size++;
}
