/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:37:47 by minizan           #+#    #+#             */
/*   Updated: 2017/06/01 17:05:05 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	len;

	if (*to_find == '\0')
		return ((char*)str);
	len = ft_strlen(to_find);
	while (*str != '\0' && n >= len)
	{
		if (ft_strncmp(str, to_find, len) == 0)
			return ((char *)str);
		str++;
		n--;
	}
	return (NULL);
}
