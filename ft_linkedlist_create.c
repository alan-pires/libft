/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linkedlist_create.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:32:06 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/07 22:23:24 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

linkedlist	*ft_linkedlist_create()
{
	linkedlist	*list;

	list = (linkedlist*)ft_calloc(1, sizeof(linkedlist));
	list->begin = NULL;
	list->end = NULL;
	list->size = 0;
	return (list);
}
