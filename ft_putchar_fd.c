/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lixu <lixu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:51:36 by lixu              #+#    #+#             */
/*   Updated: 2022/05/14 17:02:35 by lixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * A file descriptor is a number that 
 * uniquely identifies an open file 
 * in a computer's operating system

#include<unistd.h>
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int	main(void)
{
	char	c;
	int		fd;

	c = 'A';
	fd = 1;
	ft_putchar_fd(c, fd);
}
*/
