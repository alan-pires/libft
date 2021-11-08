/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_add_first.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:48:34 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/07 22:24:18 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_linkedlist_add_first(linkedlist *list, int val)
{
	node	*first_node;

	first_node = ft_snode_create(val);
	first_node->next = list->begin;
	if (list->begin == NULL && list->end == NULL)
		list->end = first_node;
	list->begin = first_node;
	list->size++;
}

