/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:28:12 by minizan           #+#    #+#             */
/*   Updated: 2017/05/26 07:52:13 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len_src;
	char	*str;

	len_src = 0;
	i = 0;
	while (s1[len_src] != '\0')
	{
		len_src++;
	}
	str = (char *)malloc(sizeof(*str) * (len_src + 1));
	if (str == 0)
	{
		return (0);
	}
	while (i < len_src)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
