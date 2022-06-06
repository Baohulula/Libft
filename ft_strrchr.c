/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 13:09:52 by lixu              #+#    #+#             */
/*   Updated: 2022/04/13 16:23:18 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * locates the last occurrence of c in the string

#include<stdio.h>
#include<string.h>
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	str[] = "This is a test string.";
	int		c;

	c = 's';
	printf("const char *str: %s\n", str);
	printf("int c: %c\n", c);
	printf("With strrchr: %s\n", strrchr(str, c));
	printf("With ft_strrchr: %s\n", ft_strrchr(str, c));
}
*/