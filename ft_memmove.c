/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:21:30 by lixu              #+#    #+#             */
/*   Updated: 2022/04/13 19:14:24 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;
	size_t	i;

	dest = (char *)dst;
	source = (char *)src;
	if (!dest && !source)
		return (NULL);
	if (dest > source)
	{
		while (len--)
		{
			dest[len] = source[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}

/*
int	main(void)
{
	char	dest[7] = "caro";
	char	src[10] = "leo";
	size_t	len;

	len = 2;
	printf("void *dest: %s\n", dest);
	printf("const void *src: %s\nsize_t len: %zu\n", src, len);
	memmove(dest, src, len);
	printf("memmoeve(return dest): %s\n", dest);
	ft_memmove(dest, src, len);
	printf("ft_memmove(return dest): %s\n", dest);
}
*/
