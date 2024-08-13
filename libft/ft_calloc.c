/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <derey@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:10:55 by derey             #+#    #+#             */
/*   Updated: 2024/07/04 12:13:06 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char		*cal;
	size_t				r;

	if (nmemb == 0 || size == 0)
	{
		cal = malloc(0);
		if (!cal)
			return (NULL);
		return (cal);
	}
	if ((nmemb >= 2147483647 || size >= 2147483647
			|| (nmemb * size > 2147483647)))
		return (0);
	r = nmemb * size;
	cal = (unsigned char *) malloc(r);
	if (!cal)
		return (NULL);
	ft_bzero(cal, r);
	return (cal);
}
