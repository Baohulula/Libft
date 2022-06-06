/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:14:04 by lixu              #+#    #+#             */
/*   Updated: 2022/04/12 19:08:51 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Allocates a block of memory for an array of count elements, 
 * each of them size bytes long, and initializes all its bits to zero.
 * The effective result is the allocation of 
 * a zero-initialized memory block of (count*size) bytes.
 * If size is zero, the return value depends on 
 * the particular library implementation 
 * (it may or may not be a null pointer), 
 * but the returned pointer shall not be dereferenced.

#include<stdio.h>
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	char	*ptr;
	size_t	i;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	i = 0;
	ptr = (char *)malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < (count * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

/*
int	main(void)
{
	void	*ptr;
	size_t	count;
	size_t	size;

	count = 10;
	size = 5;
	printf("size_t count: %zu\nsize_t size: %zu\n", count, size);
	ptr = calloc (count, size);
	printf("after applying calloc: %s\n", ptr);
}
*/
