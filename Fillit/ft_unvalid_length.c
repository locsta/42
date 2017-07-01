/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unvalid_length.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 19:49:50 by ssabbah           #+#    #+#             */
/*   Updated: 2017/06/06 13:03:01 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_unvalid_length(char *buf)
{
	int i;

	i = 0;
	while (buf)
	{
		if (buf[i] != '.' && buf[i] != '#' && buf[i] != '\n')
		{
			printf("car %c\n", buf[i]);
			return (0);
		}
		i++;
	}
	printf("i %d\n", i);
	if (i != 84)
		return (0);
	return (1);
}
