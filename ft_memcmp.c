/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:44:36 by lixu              #+#    #+#             */
/*   Updated: 2022/04/13 18:25:59 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * retrn value < 0: the first byte that 
 * does not match in both memory blocks
 * has a lower value in ptr1 than in ptr2 
 * (if evaluated as unsigned char values);
 * return value = 0: the contents of both memory blocks are equal;
 * return value > 0: the first byte that 
 * does not match in both memory blocks 
 * has a greater value in ptr1 than in ptr2 
 * (if evaluated as unsigned char values);

#include<stdio.h>
#include<string.h>
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	s1[10] = "12345678";
	char	s2[10] = "123456";
	size_t	n;

	n = 8;
	printf("const void *s1: %s\n", s1);
	printf("const void *s2: %s\nsize_t n: %zu\n", s2, n);
	printf("memcmp(returns an int): %d\n", memcmp(s1, s2, n));
	printf("ft_memcmp(returns an int): %d\n", ft_memcmp(s1, s2, n));
}
*/