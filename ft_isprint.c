/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:50:02 by lixu              #+#    #+#             */
/*   Updated: 2022/05/14 18:15:31 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdio.h>
#include<ctype.h>
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	c1;
	int	c2;

	c1 = '!';
	c2 = 127;
	printf("int c1:%c\nint c2: %c\n", c1, c2);
	printf("c1: isprint (returns an int): %d\n", isprint(c1));
	printf("c1: ft_isprint (returns an int): %d\n", ft_isprint(c1));
	printf("c2: isprint (returns an int): %d\n", isprint(c2));
    printf("c2: ft_isprint (returns an int): %d\n", ft_isprint(c2));
}
*/
