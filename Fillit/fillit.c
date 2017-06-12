/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 11:16:47 by minizan           #+#    #+#             */
/*   Updated: 2017/06/12 11:01:57 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		main(int argc, char *argv[])
{
	if (argc != 2)
		ft_putstr("usage: need one and only file as an argument\n");
	else
	{
		if (ft_check_file(argv[1]))
		{
			ft_count_blocks(argv[1]); //si blocks > 26 "error too many blocks"
			ft_create_blocks(argv[1], int nb_blocks);
			ft_put_letters_in_blocks(char ***blocks);
			ft_create_square_tab(int nb_blocks);
			ft_place_pieces(char **square_tab, char ***blocks);
			ft_print_tab(char **square_tab);
		}
		else
			ft_putstr("error\n");
	}
	return (0);
}
