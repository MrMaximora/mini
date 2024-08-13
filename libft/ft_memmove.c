/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:47:54 by derey             #+#    #+#             */
/*   Updated: 2023/11/07 09:36:55 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			x;

	x = 0;
	if ((unsigned char *)src == NULL && (unsigned char *)dest == NULL && n)
		return (0);
	if (dest > src)
	{
		while (x < n)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (x < n)
		{
			((unsigned char *)dest)[x] = ((unsigned char *)src)[x];
			x++;
		}
	}
	return (dest);
}
