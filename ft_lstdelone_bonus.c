/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:23:18 by lixu              #+#    #+#             */
/*   Updated: 2022/04/14 13:28:19 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
frees the memory of the node’s content using the function ’del’
and free the node. The memory of ’next’ must not be freed.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	if (!lst || !del)
		return ;
	if (lst->content)
	{
		del(lst->content);
		free(lst);
	}
}
