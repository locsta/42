/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssabbah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:45:39 by ssabbah           #+#    #+#             */
/*   Updated: 2017/05/15 19:51:08 by ssabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FILLIT_H
# define FILLIT_H

# include "includes/libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*ft_singleline(char *str);
int		ft_filelength(char *str);
int		ft_unvalid_content(char *str);
int		ft_unvalid_length(char *str);

#endif
