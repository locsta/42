/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filelength.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 16:55:59 by ssabbah           #+#    #+#             */
/*   Updated: 2017/06/06 12:59:02 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		ft_filelength(char *str)
{
	int		fd;
	char	len[1];
	char	*buf;
	int		c;

	c = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, len, 1))
		c++;
	close(fd);
	return (c);
}
