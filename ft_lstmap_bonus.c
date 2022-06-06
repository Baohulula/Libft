/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 12:44:10 by lixu              #+#    #+#             */
/*   Updated: 2022/04/16 18:41:20 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Iterates the list ’lst’ and applies the function
’f’ on the content of each node. 
Creates a new list resulting of the successive applications 
of the function ’f’. 
The ’del’ function is used to delete the content of a node if needed.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f) (void *), void (*del) (void *))
{
	t_list	*head;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	head = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new)
		{
			ft_lstadd_back(&head, new);
			lst = lst->next;
		}
		else
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
	}
	return (head);
}
