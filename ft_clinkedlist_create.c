/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clinkedlist_create.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:32:06 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/28 15:56:25 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

c_list	*ft_clinkedlist_create()
{
	c_list	*list;

	list = (c_list*)ft_calloc(1, sizeof(c_list));
	list->begin = NULL;
	list->end = NULL;
	list->size = 0;
	return (list);
}
