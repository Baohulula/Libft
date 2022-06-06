/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:11:55 by lixu              #+#    #+#             */
/*   Updated: 2022/03/28 18:12:04 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	c1;
	int	c2;

	c1 = '1';
	c2 = 'A';
	printf("int c1: %c\nint c2: %c\n", c1, c2);
	printf("c1: isdigit (returns an int): %d\n", isdigit (c1));
	printf("c1: ft_isdigit (returns an int): %d\n", ft_isdigit (c1));
	printf("c2: isdigit (returns an int): %d\n", isdigit (c2));
    printf("c2: ft_isdigit (returns an int): %d\n", ft_isdigit (c2));
}
*/
