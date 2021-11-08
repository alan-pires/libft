/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_print.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:14:02 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/07 22:45:15 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Creates an auxiliary node that will points to the first node of a linked list
	and then loop until it reaches the end of the list, that is, when it points to NULL */

void	ft_linkdedlist_print(linkedlist *list)
{
	node	*p;
	
	p = list->begin;
	ft_putstr_fd("LinkedList -> ",1);
	while (p != NULL)
	{
		ft_putnbr_fd(p->val, 1);
		ft_putstr_fd(" -> ",1);
		p = p->next;
	}
	ft_putstr_fd("NULL\n",1);
	ft_putstr_fd("Size: ", 1);
	ft_putnbr_fd(list->size, 1);
	ft_putstr_fd(" node(s)\n", 1);
}
