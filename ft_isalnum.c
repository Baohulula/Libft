/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:19:41 by lixu              #+#    #+#             */
/*   Updated: 2022/03/28 18:46:01 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	c1;
	int	c2;
	int c3;

	c1 = 'N';
	c2 = '5';
	c3 = '!';
	printf("int c1: %c\nint c2: %c\nint c3: %c\n", c1, c2, c3);
	printf("c1: isalnum (returns an int): %d\n", isalnum(c1));
	printf("c1: ft_isalnum (returns an int): %d\n", ft_isalnum(c1));
	printf("c2: isalnum (returns an int): %d\n", isalnum(c2));
    printf("c2: ft_isalnum (returns an int): %d\n", ft_isalnum(c2));
	printf("c3: isalnum (returns an int): %d\n", isalnum(c3));
    printf("c3: ft_isalnum (returns an int): %d\n", ft_isalnum(c3));
}
*/
