/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 18:22:08 by minizan           #+#    #+#             */
/*   Updated: 2017/05/31 15:44:32 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if ((s1 == NULL && s2 == NULL) || (*s1 == '\0' && *s2 == '\0') || n == 0)
		return (1);
	if (s1 == NULL || s2 == NULL || *s1 == '\0' || *s2 == '\0')
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && (i + 1) < n)
	{
		i++;
	}
	if (s1[i] != s2[i])
		return (0);
	else
		return (1);
}
