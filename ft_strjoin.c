/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:20:30 by lixu              #+#    #+#             */
/*   Updated: 2022/04/01 18:27:55 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*join;
	int		len1;
	int		len2;
	int		i;

	if (!str1 || !str2)
		return (NULL);
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	join = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!join)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		join[i] = str1[i];
		i++;
	}
	i = 0;
	while (str2[i])
		join[len1++] = str2[i++];
	join[len1] = '\0';
	return (join);
}

/*
int	main(void)
{
	char const	str1[] = "12345";
	char const	str2[] = "67";

	printf("char const *str1: %s\n", str1);
	printf("char const *str2: %s\n", str2);
	printf("join: %s\n", ft_strjoin(str1, str2));
}
*/
