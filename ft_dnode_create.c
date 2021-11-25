/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dnode_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:40:26 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/24 21:57:44 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

d_node	*ft_dnode_create(int val)
{
	d_node *nd = (d_node*)ft_calloc(1, sizeof(d_node));
	nd->val =  val;
	nd->prev = NULL;
	nd->next = NULL;
	return (nd);
}