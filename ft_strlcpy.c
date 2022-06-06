/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 14:27:27 by lixu              #+#    #+#             */
/*   Updated: 2022/04/19 18:16:09 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * return the length of src

#include<stdio.h>
#include<string.h>
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count])
		count++;
	if (dsize == 0)
		return (count);
	i = 0;
	while (src[i] != '\0' && i < (dsize - 1))
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (count);
}

/*
int	main(void)
{
	char			src[] = "123456789";
	char			dest[] = "abcde";
	unsigned int	size;

	size = 0;
	//printf("src: %s\ndest: %s\nsize: %u\n", src, dest, size);
	printf("result of strlcpy: %lu\n", strlcpy(dest, src, size));
	printf("%s\n", dest);
	//printf("result of ft_strlcpy: %lu\n", ft_strlcpy(dest, src, size));
}
*/