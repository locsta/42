/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 11:17:29 by minizan           #+#    #+#             */
/*   Updated: 2017/06/12 11:01:50 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <fcntl.h>

int		ft_check_file(char *filename);
int		ft_count_blocks(char *filename);
char	***ft_create_blocks(char *filename, int nb_blocks);
void	ft_put_letters_in_blocks(char ***blocks);
char	**ft_create_square_tab(unsigned int size);
void	ft_place_pieces(char **square_tab, char ***blocks);
void	ft_print_tab(char **square_tab);

#endif
