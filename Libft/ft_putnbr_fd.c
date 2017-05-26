/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/10 12:11:31 by minizan           #+#    #+#             */
/*   Updated: 2017/05/10 12:17:27 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == (-2147483648))
	{
		ft_putnbr_fd(-214748364, fd);
		ft_putchar_fd(8 + 48, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd(45, fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n <= 9)
	{
		ft_putchar_fd(n + 48, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
