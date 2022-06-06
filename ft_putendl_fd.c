/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 19:36:43 by lixu              #+#    #+#             */
/*   Updated: 2022/04/01 17:54:47 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i++], 1);
	}
	write(fd, "\n", 1);
}

/*
int	main(void)
{
	char	s[] = "abcdef";
	int		fd;

	fd = 1;
	ft_putendl_fd(s, fd);
}
*/
