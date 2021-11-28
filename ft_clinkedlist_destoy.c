/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clinkedlist_destoy.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:07:49 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/28 15:54:53 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clinkedlist_destroy(c_list **list_ref)
{
	c_list	*list_aux;
	c_node	*current_node;
	c_node	*node_aux;

	list_aux = *list_ref;
	current_node = list_aux->begin;
	node_aux = NULL;
	while (current_node != list_aux->end)
	{
		node_aux = current_node;
		current_node = current_node->next;
		ft_cnode_destroy(&node_aux);
	}
	ft_cnode_destroy(&current_node);
	free(list_aux);
	*list_ref = NULL;
}
