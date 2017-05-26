/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 12:14:56 by minizan           #+#    #+#             */
/*   Updated: 2017/05/10 16:28:38 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == (-2147483648))
	{
		ft_putnbr(-214748364);
		ft_putchar(8 + 48);
	}
	else if (n < 0)
	{
		ft_putchar(45);
		n = -n;
		ft_putnbr(n);
	}
	else if (n <= 9)
	{
		ft_putchar(n + 48);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
