/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 18:38:50 by lixu              #+#    #+#             */
/*   Updated: 2022/04/16 17:49:22 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * allocates sufficient memory for a copy of the string,
 * returns a pointer to it.

#include<stdio.h>
#include<string.h>
*/

#include "libft.h"

char	*ft_strdup(const char *src)

{
	char	*dup;
	size_t	i;	

	dup = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
int	main(void)
{
	char	str[];

	str[] = "12345";
	printf("const char *src: %s\n", str);
	printf("after applying strdup: %s\n", strdup (str));
	printf("after applying ft_strdup: %s\n", ft_strdup (str));
}
*/
