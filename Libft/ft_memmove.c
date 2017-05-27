/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:32:39 by minizan           #+#    #+#             */
/*   Updated: 2017/05/26 16:12:01 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*src;
	char	*dst;
	size_t	i;

	i = -1;
	dst = (char*)s1;
	src = (char*)s2;
	if (src < dst)
		while ((int)(--n) >= 0)
			*(dst + n) = *(src + n);
	else
		while (++i < n)
			*(dst + i) = *(src + i);
	return (dst);
}
