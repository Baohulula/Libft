/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:44:46 by lixu              #+#    #+#             */
/*   Updated: 2022/04/13 19:15:01 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdio.h>
#include<string.h>
*/

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (!dest && !source)
		return (NULL);
	while (n--)
		dest[n] = source[n];
	return (dest);
}

/*
int	main(void)
{
	char	dest[10] = "caro";
	char	src[10] = "leo";
	size_t	n;

	n = 2;
	printf("void *restrict dest: %s\n", dest);
	printf("const void *restrict src: %s\nsize_t n: %zu\n", src, n);
	memcpy(dest, src, n);
	printf("memcpy(return dest): %s\n", dest);
	ft_memcpy(dest, src, n);
	printf("ft_memcpy(return dest): %s\n", dest);
}
*/
