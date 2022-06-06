/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:24:00 by lixu              #+#    #+#             */
/*   Updated: 2022/04/04 15:56:56 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdio.h>
#include<string.h>
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*
int	main(int ac, char **av)
{
	ac = 2;
	printf("strlen: %lu characters\n", strlen(av[1]));
	printf("ft_strlen: %d characters\n", ft_strlen(av[1]));
}
*/
