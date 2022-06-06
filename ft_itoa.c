/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 17:24:11 by lixu              #+#    #+#             */
/*   Updated: 2022/05/21 16:54:26 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * allocates a string with malloc
 * convert an integer to a string

#include<stdio.h>
#include<stdlib.h>
*/

#include "libft.h"

static long int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		len;
	unsigned int	nbr;

	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = '-';
		nbr = n * -1;
	}
	else
		nbr = n;
	while (nbr > 0)
	{
		str[len--] = 48 + (nbr % 10);
		nbr = nbr / 10;
	}
	return (str);
}

/*
int	main(void)
{
	int	n;

	n = 12345;
	printf("int n: %d\n", n);
	printf("ft_itoa: %s\n", ft_itoa(n));
}
*/
