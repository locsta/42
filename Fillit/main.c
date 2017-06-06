/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 15:51:48 by ssabbah           #+#    #+#             */
/*   Updated: 2017/06/06 13:08:15 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		main(int argc, char **argv)
{	
	char *buf;

	if ((buf = (char *)malloc(sizeof(*buf) * ft_filelength(argv[1]))) == 0)
		return (0);
	if (argc == 2 && ft_filelength(argv[1]) != 0)
	{
		buf = ft_singleline(argv[1]);
		printf("buf\n%s\n", buf);
	}
	if (ft_unvalid_length(buf) == 0 && ft_unvalid_content(buf)  == 0)
	{	
		printf("length %d\n", ft_unvalid_length(buf));
		printf("content %d\n", ft_unvalid_content(argv[1]));
		printf("not valide = 0\n"); // he ho
		return (0);
	}
	printf("%d\n, %d\n",ft_unvalid_length(buf), ft_unvalid_content(buf));
	return (0);
}
