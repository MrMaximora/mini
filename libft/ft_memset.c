/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:06:10 by derey             #+#    #+#             */
/*   Updated: 2023/11/07 10:00:04 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			cmp;
	unsigned char	*p;

	cmp = 0;
	p = s;
	while (n > cmp)
	{
		*p = (unsigned char) c;
		p++;
		cmp++;
	}
	return (s);
}
