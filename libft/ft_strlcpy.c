/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:07:47 by derey             #+#    #+#             */
/*   Updated: 2023/11/09 08:52:03 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*d;
	char	*s;
	size_t	a;

	i = 0;
	a = 0;
	d = (char *)dst;
	s = (char *)src;
	while (s[a])
		a++;
	if (size > 0)
	{
		while (s[i] != '\0' && i < size - 1)
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	return (a);
}
