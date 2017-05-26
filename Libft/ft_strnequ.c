/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 18:22:08 by minizan           #+#    #+#             */
/*   Updated: 2017/05/11 17:54:01 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && (i + 1) < n)
	{
		i++;
	}
	if (s1[i] != s2[i])
		return (0);
	else
		return (1);
}

int		main(void)
{
	char str1[] = "test a";
	char str2[] = "test b";

	printf("%d", ft_strnequ(str1, str2, 5));
	return (0);
}
