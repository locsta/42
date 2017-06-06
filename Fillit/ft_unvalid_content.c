/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unvalid_content.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 19:49:08 by ssabbah           #+#    #+#             */
/*   Updated: 2017/06/06 12:53:13 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_unvalid_content(char *str)
{
	int c;
	int i;

	c = 0;
	i = 0;
	while (str) 
	{
		if (str[c] != '.' && str[c] != '#')
			return (0);
		if (str[c] == '#' && str[c + 1] == '#') 
			i++;
		if (str[c] == '#' && str[c + 5] == '#') 
			i++;
		if (str[c] == '#' && str[c - 1] == '#') 
			i++;
		if (str[c] == '#' && str[c - 5] == '#') 
			i++;
		c++;
	}
	if (i == 5 || i == 8)
		return (1);
	else return (0);
}
