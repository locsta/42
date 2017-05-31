/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 13:59:41 by minizan           #+#    #+#             */
/*   Updated: 2017/05/31 17:03:23 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	*dst;
	unsigned char	c1;

	i = 0;
	src = (unsigned char*)s2;
	dst = (unsigned char*)s1;
	c1 = (unsigned char)c;
	while (i < n)
	{
		dst[i] = src[i];
		if (src[i] == c1)
		{
			return (&dst[i + 1]);
		}
		i++;
	}
	return (NULL);
}
