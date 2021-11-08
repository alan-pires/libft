/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_get_val.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 22:50:31 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/07 23:06:28 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_linkedlist_get_val(linkedlist *list, int index)
{
	int		i;
	node	*current_node;

	i = 0;
	current_node = list->begin;
	if (list->size <= 0)
	{
		ft_putstr_fd("The list is empty\n", 1);
		return (-1);
	}
	else if (index < 0 || index >= list->size)
	{
		ft_putstr_fd("You're trying to access an invalid index\n", 1);
		return (-1);
	}
	else
	{
		while (i++ != index)
			current_node = current_node->next;
	}
	return (current_node->val);
}
