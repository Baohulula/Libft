/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:50:50 by lixu              #+#    #+#             */
/*   Updated: 2022/04/14 13:28:19 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*lst1;

	if (!lst)
		return (0);
	size = 1;
	lst1 = lst;
	while (lst1->next)
	{
		size++;
		lst1 = lst1->next;
	}
	return (size);
}
