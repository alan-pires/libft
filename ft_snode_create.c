/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_snode_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 22:40:26 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/05 20:48:17 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

node	*ft_snode_create(int val)
{
	node *nd = (node*)ft_calloc(1, sizeof(node));
	nd->val =  val;
	nd->next = NULL;
	return (nd);
}