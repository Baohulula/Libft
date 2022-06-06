/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:46:21 by lixu              #+#    #+#             */
/*   Updated: 2022/03/28 18:13:15 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * Converts uppercase to lowercase. 
 * If no such conversion is possible, the value returned is c unchanged.

#include<stdio.h>
#include<ctype.h>
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

/*
int	main(void)
{
	int	c;

	c = 'A';
	printf("int c: %c\n", c);
	printf("after tolower(returns an int): %c\n", tolower(c));
	printf("after ft_tolower(returns an int): %c\n", ft_tolower(c));
}
*/
