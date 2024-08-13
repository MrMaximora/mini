/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:15:02 by derey             #+#    #+#             */
/*   Updated: 2023/11/09 08:50:34 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	digit;
	int	count;
	int	i;

	i = 0;
	count = 1;
	digit = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\b' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-')
	{
		count = -1;
		i++;
	}
	else if (nptr[i] == '+')
	{
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		digit = digit * 10 + (nptr[i] - 48);
		i++;
	}
	return (digit * count);
}
