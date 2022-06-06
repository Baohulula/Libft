/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:46:15 by lixu              #+#    #+#             */
/*   Updated: 2022/03/28 18:46:01 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	c1;
	int	c2;

	c1 = 'X';
	c2 = '1';
	printf ("int c1: %c\nint c2: %c\n", c1, c2);
	printf ("c1: isalpha (returns an int): %d\n", isalpha (c1));
	printf ("c1: ft_isalpha (returns an int): %d\n", ft_isalpha (c1));
	printf ("c2: isalpha (returns an int): %d\n", isalpha (c2));
	printf ("c2: ft_isalpha (returns an int): %d\n", ft_isalpha (c2));
}
*/
