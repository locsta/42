/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 16:37:47 by minizan           #+#    #+#             */
/*   Updated: 2017/05/31 09:03:40 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (*s2 == '\0')
		return ((char*)s1);
	i = 0;
	while (*s1 && n--)
	{
		if (*s1 != *s2)
			s1++;
		else
		{
			s1++;
			s2++;
			i++;
		}
		if (*s2 == '\0')
			return ((char*)(s1 - i));
	}
	return (NULL);
}
