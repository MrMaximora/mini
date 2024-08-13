/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:59:08 by derey             #+#    #+#             */
/*   Updated: 2023/11/07 09:34:44 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	size_t			c;

	c = 0;
	st1 = (unsigned char *) s1;
	st2 = (unsigned char *) s2;
	while (c < n)
	{
		if (st1[c] != st2[c] && c < n)
		{
			if (st1[c] > st2[c])
				return (st1[c] - st2[c]);
			if (st1[c] < st2[c])
				return (st1[c] - st2[c]);
		}
		c++;
	}
	return (0);
}
