/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:52:27 by minizan           #+#    #+#             */
/*   Updated: 2017/05/17 16:53:45 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **link, void (*del)(void *, size_t))
{
	del(&((*link)->content), (*link)->content_size);
	free(*link);
	*link = NULL;
}
