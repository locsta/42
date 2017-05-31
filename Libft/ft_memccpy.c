/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 13:59:41 by minizan           #+#    #+#             */
/*   Updated: 2017/05/31 16:25:40 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

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

int		main(void)
{
	char	buf1[] = "Ceci est un test.";
	char	buf2[200];
	void	*p1;
	void	*p2;

	printf("%s\n", (char*)memccpy(buf2, buf1, 'i', 10));
	printf("%s\n", (char*)ft_memccpy(buf2, buf1, 'i', 10));
	return (0);
}
