/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:01:02 by lixu              #+#    #+#             */
/*   Updated: 2022/04/13 16:24:25 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * locates the first occurrence of c in the string

#include<stdio.h>
#include<string.h>
*/

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != (char)c)
	{
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)str + i);
	return (NULL);
}

/*
int	main(void)
{
	char	str[] = "tripouille";
	int		c;

	c = 't' + 256;
	printf("const char *str: %s\n", str);
	printf("int c: %c\n", c);
	printf("With strchr: %s\n", strchr(str, c));
	printf("With ft_strchr: %s\n", ft_strchr(str, c));
}
*/
