/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:45:15 by lixu              #+#    #+#             */
/*   Updated: 2022/04/16 18:32:46 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*x;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	x = (char *)malloc(sizeof(char) * (i + 1));
	if (!(x))
		return (NULL);
	x[i] = '\0';
	while (i > 0)
	{
		x[i - 1] = (*f)(i - 1, s[i - 1]);
		i--;
	}
	return (x);
}
