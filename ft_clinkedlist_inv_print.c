/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clinkedlist_inv_print.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:14:02 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/28 23:11:31 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// mais de 25 linhas arrumar

void	ft_clinkdedlist_inv_print(c_list *list)
{
	c_node	*node;
	size_t	aux;

	aux = 0;
	if (list->size == 0)
	{
		ft_putstr_fd("L -> NULL\n",1);
		ft_putstr_fd("L->end -> NULL\n", 1);
	}
	else
	{
		node = list->end;
		ft_putstr_fd("L ->\n",1);
		while (aux < list->size)
		{
			ft_putstr_fd(" -> ",1);
			ft_putnbr_fd(node->val, 1);
			node = node->prev;
			aux++;
		}
		ft_putstr_fd("\nL->begin -> ",1);
		ft_putnbr_fd(list->begin->val, 1);
		ft_putstr_fd("\n",1);
	}
	ft_putstr_fd("Size: -> ",1);
	ft_putnbr_fd(list->size, 1);
	ft_putstr_fd("\n\n",1);
}
