/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cnode_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:40:26 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/26 21:46:09 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

c_node	*ft_cnode_create(int val)
{
	c_node *node = (c_node*)ft_calloc(1, sizeof(c_node));
	node->val =  val;
	node->prev = node;
	node->next = node;
	return (node);
}
