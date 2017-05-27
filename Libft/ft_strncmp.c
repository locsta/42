/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 10:52:23 by minizan           #+#    #+#             */
/*   Updated: 2017/05/27 06:49:34 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (s2[0] == 0)
	{
		return (s1[0]);
	}
	else if (s1[0] == 0)
	{
		return (-s2[0]);
	}
	else
	{
		while (s1[i] == s2[i] && i < n)
		{
			i++;
		}
		if (i >= n)
			return (0);
		else
			return (s1[i] - s2[i]);
	}
}
