/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:24:11 by lixu              #+#    #+#             */
/*   Updated: 2022/04/19 18:11:23 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
converts the initial portion of the string
pointed to by str to int representation.
*/

/*if (str > LONG_MAX)
		return (-1);
	if (str < LONG_MIN)
		return (0);*/

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	long int			sig;
	unsigned long int	nbr;
	unsigned long int	check;

	sig = 1;
	nbr = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str++ == 45)
			sig = -1;
	}
	check = (LONG_MAX + (sig == -1));
	while (*str >= '0' && *str <= '9')
	{
		if ((check / 10 < nbr) || (check - (*str - 48) < (nbr * 10)))
			return (check * sig);
		nbr = nbr * 10 + (*str++ - 48);
	}
	return (nbr * sig);
}

/*
int	main(void)
{
	char	str[] = " 	-1234ab67";

	printf ("original string: %s\n", str);
	printf ("after atoi: %d\n", atoi(str));
	printf ("after ft_atoi: %d\n", ft_atoi(str));
}
*/
