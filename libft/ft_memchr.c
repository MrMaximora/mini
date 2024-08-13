/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:03:39 by derey             #+#    #+#             */
/*   Updated: 2023/11/07 10:26:08 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*w;

	x = 0;
	w = (void *) s;
	while (x < n)
	{
		if (*w == (unsigned char) c)
			return (w);
		x++;
		w++;
	}
	return (NULL);
}
