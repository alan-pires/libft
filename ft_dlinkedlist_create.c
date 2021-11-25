/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlinkedlist_create.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:32:06 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/24 21:59:19 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

d_linked_list	*ft_dlinkedlist_create()
{
	d_linked_list	*list;

	list = (d_linked_list*)ft_calloc(1, sizeof(d_linked_list));
	list->begin = NULL;
	list->end = NULL;
	list->size = 0;
	return (list);
}
