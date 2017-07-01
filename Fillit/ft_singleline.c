/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_singleline.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 16:23:08 by ssabbah           #+#    #+#             */
/*   Updated: 2017/06/06 13:13:03 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_singleline(char *str)
{
	int		fd;
	char	len[1];
	char	*buf;
	int		c;

	c = ft_filelength(str);
	buf = (char *)malloc(sizeof(*buf) * c);
	fd = open(str, O_RDONLY);
	if (fd == -1)
		return (0);
	c = 0;
	while (read(fd, len, 1))
		buf[c++] = len[0];
	c++;
	buf[c] = 0;
	return (buf);
}
