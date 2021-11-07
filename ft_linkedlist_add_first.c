/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_add_first.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:48:34 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/05 21:17:22 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_linkedlist_add_first(linkedlist *list, int val)
{
	node	*p;

	p = ft_snode_create(val);
	p->next = list->begin;
	list->begin = p;
}
