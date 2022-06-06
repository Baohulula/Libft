/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:28:36 by lixu              #+#    #+#             */
/*   Updated: 2022/03/29 14:44:09 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Compares up to n characters of *s1 to those of *s2.
 * starts comparing the first character of each string.
 * If they are equal to each other, it continues with the following pairs
 * until the characters differ, o
 * until a terminating null-character is reached, o
 * until n characters match in both strings

#include<stdio.h>
#include<string.h>
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			idx;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	idx = 0;
	if (n == 0)
		return (0);
	while (str1[idx] == str2[idx] && str1[idx] && (idx < n - 1))
	{
		idx++;
	}
	return (str1[idx] - str2[idx]);
}

/*
int	main(void)
{
	char			str1[50] = "9333";
	char			str2[50] = "9334";
	unsigned int	n;

	n = 7;
	printf ("str1: %s\nstr2: %s\n", str1, str2);
	printf ("unsigned int: %d\n", n);
	printf ("strncmp:%d\n", strncmp(str1, str2, n));
	printf ("strncmp:%d\n", ft_strncmp(str1, str2, n));
}
*/
