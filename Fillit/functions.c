/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 09:08:42 by minizan           #+#    #+#             */
/*   Updated: 2017/06/12 11:02:09 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_check_file(char *filename)
{
	return (1); //fail

	return (0); //no problem
}

int		ft_count_blocks(char *filename)
{
	int		nb_blocks;

	nb_blocks = 0;
	nb_blocks = (nb_lines + 1) / 5;

	return (nb_blocks);
}

char	***ft_create_blocks(char *filename, int nb_blocks)
{
	char	***blocks;
	int		i;

	i = 0;
	blocks = (char***)malloc(sizeof(char**) * nb_blocks);
	while (nb_blocks > 0)
	{
		blocks[nb_blocks] = (char**)malloc(sizeof(char*) * 4);
		while (blocks[nb_blocks][i])
		{
			blocks[nb_blocks][i] = (char*)malloc(sizeof(char) * 4);
			i++;
		}
		nb_blocks--;
		
	}
	return (blocks);
}

void	ft_put_letters_in_blocks(char ***blocks)
{
	int		block_num;
	int		j;
	int		k;
	char	letter;

	i = 0;
	j = 0;
	k = 0;
	letter = 'A';
	while (blocks[block_num] != '\0')
	{
		while (blocks[block_num][j] != '\0')
		{
			while (blocks[block_num][j][k] != '\0')
			{
				if (blocks[block_num][j][k] == "#")
				{
					blocks[block_num][j][k] = letter;
				}
				k++;
			}
			j++;
		}
		block_num++;
		letter++;
	}
}

char	**ft_create_square_tab(unsigned int size)
{
	char	**square_tab;
	int		i;

	i = 0;
	square_tab = (char**)malloc(sizeof(char*) * size);
	while (size > 0)
	{
		square_tab[i] = (char*)malloc(sizeof(char) * size);
		size--;
	}
	return (square_tab);
}

void	ft_place_pieces(char **square_tab, char ***blocks)
{

}

void	ft_print_tab(char **square_tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (square_tab[i] != '\0')
	{
		while (square_tab[i][j] != '\0')
		{
			ft_putchar(square_tab[i][j]);
			j++;
		}
		i++;
	}
}
