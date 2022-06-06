/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:22:26 by lixu              #+#    #+#             */
/*   Updated: 2022/03/28 18:13:19 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Converts lowercase to uppercase.
 * If no such conversion is possible, the value returned is c unchanged.

#include<stdio.h>
#include<ctype.h>
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

/*
int	main(void)
{
	int	c;

	c = 'a';
	printf("int c: %c\n", c);
	printf("after toupper(return an int): %c\n", toupper(c));
	printf("after ft_toupper(return an int): %c\n", ft_toupper(c));
}
*/
