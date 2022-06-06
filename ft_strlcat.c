/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:05:38 by lixu              #+#    #+#             */
/*   Updated: 2022/04/19 18:15:44 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * return the length of src + (dstsize / dst)
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	j = destlen;
	if (dsize <= destlen)
		return (srclen + dsize);
	while (src[i] && (j < (dsize - 1)))
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (srclen + destlen);
}
