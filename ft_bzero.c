/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 17:21:54 by lixu              #+#    #+#             */
/*   Updated: 2022/03/29 13:01:07 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.

#include<stdio.h>
#include<strings.h>
*/

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*result;

	i = 0;
	result = (char *)str;
	if (n == 0)
		return ;
	while (i < n)
	{
		result[i] = '\0';
		i++;
	}
}

/*
int	main(void)
{
	char	str[3];
	size_t	n;

	n = 3;
	printf("void *str: %s\nsize_t n: %zu\n", str, n);
	bzero(str, n);
	ft_bzero(str, n);
	printf("after applying bzero: %s\n", result);
	printf("after applying ft_bzero: %s\n", result);
}
*/
