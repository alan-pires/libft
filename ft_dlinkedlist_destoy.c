/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlinkedlist_destoy.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:07:49 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/24 22:08:59 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlinkedlist_destroy(d_linked_list **list_ref)
{
	d_linked_list	*list_aux;
	d_node			*current_node;
	d_node			*node_aux;

	list_aux = *list_ref;
	current_node = list_aux->begin;
	node_aux = NULL;
	while (current_node != NULL)
	{
		node_aux = current_node;
		current_node = current_node->next;
		free(node_aux);
	}
	free(list_aux);
	*list_ref = NULL;
}
