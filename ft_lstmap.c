/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apires-d <apires-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 17:41:07 by apires-d          #+#    #+#             */
/*   Updated: 2021/11/07 20:27:44 by apires-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*func)(void *), void (*del)(void *))
{
	t_list	*new_elem;
	t_list	*new_head;

	if (!lst)
		return (NULL);
	new_head = 0;
	while (lst)
	{
		new_elem = ft_lstnew(func(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new_elem);
		lst = lst->next;
	}
	return (new_head);
}
