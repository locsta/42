/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:31:36 by minizan           #+#    #+#             */
/*   Updated: 2017/05/30 14:10:56 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*current;

	current = (unsigned char*)s;
	while (n--)
	{
		if (*current == (unsigned char)c)
			return (current);
		if (n)
			current++;
	}
	return (NULL);
}
