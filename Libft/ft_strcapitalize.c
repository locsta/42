/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minizan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 11:35:38 by minizan           #+#    #+#             */
/*   Updated: 2017/03/20 17:12:59 by minizan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
		i = 0;
	}
	while (str[i] != '\0')
	{
		if ((str[i] < 48 || (str[i] > 57 && str[i] < 65) || (str[i] > 90 &&
			str[i] < 97) || str[i] > 122) && (str[j] >= 97 && str[j] <= 122))
			str[j] = str[j] - 32;
		i++;
		j++;
	}
	return (str);
}
