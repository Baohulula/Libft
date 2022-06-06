/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 15:18:47 by lixu              #+#    #+#             */
/*   Updated: 2022/04/16 17:55:09 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*s2;
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]))
	{
		len--;
	}
	if (len <= i)
		return (ft_strdup(""));
	else
		s2 = ft_substr((char *)s1, i, len - i);
	return (s2);
}
