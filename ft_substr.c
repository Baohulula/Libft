/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 17:06:11 by lixu              #+#    #+#             */
/*   Updated: 2022/04/20 13:23:41 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
JUST SO I KNOW, DOESN´T APPLY HERE:
const char * is a pointer to a const char, 
char * const is a constant pointer to a char. 
The first, the value being pointed to can't be changed 
but the pointer can be. 
The second, the value being pointed at can change 
but the pointer can't (similar to a reference).

#include<stdio.h>
#include<stdlib.h>
*/

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;

	if (str == NULL)
		return (NULL);
	if (len > ft_strlen(str))
		len = ft_strlen(str);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if ((i >= start) && (j < len))
		{
			sub[j] = str[i];
			j++;
		}
		i++;
	}
	sub[j] = '\0';
	return (sub);
}

/*
int	main(void)
{
	char const		str[] = "abcdefghijkl";
	unsigned int	start;
	size_t			len;

	start = 4;
	len = 3;
	printf("char const *str: %s\n", str);
	printf("unsigned int start (it´s an index): %u\n", start);
	printf("size_t len (the maximum size of sub): %zu\n", len);
	printf("substring: %s\n", ft_substr(str, start, len));
}
*/
