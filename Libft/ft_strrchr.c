/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 16:14:31 by minizan           #+#    #+#             */
/*   Updated: 2017/05/31 08:17:04 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s) + 1;
	while (--len)
	{
		if (s[len] == (char)c)
			return ((char*)s + len);
	}
	if (s[len] == (char)c)
		return ((char*)s + len);
	return (NULL);
}
