/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 17:03:07 by lixu              #+#    #+#             */
/*   Updated: 2022/04/20 13:14:25 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countstr(char const *s, char c)
{
	size_t	i;
	int		trigger;

	if (!s)
		return (0);
	i = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			i++;
			trigger = 1;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (i);
}

static void	ft_error(char **str, const char *s, char c)
{
	size_t	i;

	i = 0;
	while (i < ft_countstr(s, c))
		free(str[i]++);
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	int		j;
	int		start;

	split = (char **)malloc(sizeof(char *) * (ft_countstr(s, c) + 1));
	if (!split || !s)
		return (NULL);
	i = -1;
	j = 0;
	start = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] && s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{	
			split[j++] = ft_substr(s, start, i - start);
			if (!split)
				ft_error(split, s, c);
			start = -1;
		}
	}
	split[j] = 0;
	return (split);
}

/*
int	main(void)
{
	char	**result;
	int		i;

	i = 0;
	result = ft_split ("lorem ipsum dolor sit amet, , mi.", ' ');
	if (!result)
		return (0);
	while (result[i])
	{
		ft_putstr_fd(result[i++], 1);
		write(1, "\n", 1);
	}
	system("leaks a.out");
}
*/
