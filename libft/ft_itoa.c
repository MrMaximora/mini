/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <derey@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:17:11 by derey             #+#    #+#             */
/*   Updated: 2024/08/08 09:36:43 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_power(int nb)
{
	int	pow;

	pow = 1;
	while (nb / 10 != 0)
	{
		nb /= 10;
		pow *= 10;
	}
	return (pow);
}

static void	ft_putnbr(int nb, char *arr)
{
	int	pow;
	int	i;

	i = 0;
	pow = ft_find_power(nb);
	if (nb < 0)
	{
		arr[i] = '-';
		nb *= -1;
		i++;
	}
	while (pow >= 1)
	{
		arr[i] = (nb / pow) + '0';
		nb %= pow;
		pow /= 10;
		i++;
	}
	arr[i] = 0;
}

static int	ft_size(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		i++;
	while (nb / 10 != 0)
	{
		nb /= 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*arr;

	i = ft_size(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	arr = ft_calloc(sizeof(char), (i + 1));
	if (!arr)
		return (NULL);
	ft_putnbr(n, arr);
	return (arr);
}
