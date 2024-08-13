/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:23:37 by derey             #+#    #+#             */
/*   Updated: 2023/11/07 09:35:58 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			cmp;
	unsigned char	*s;
	unsigned char	*d;

	cmp = 0;
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (s == NULL && d == NULL && n)
	{
		return (0);
	}
	while (cmp < n)
	{
		d[cmp] = s[cmp];
		cmp++;
	}
	return (dest);
}
