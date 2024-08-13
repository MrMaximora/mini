/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:53:40 by derey             #+#    #+#             */
/*   Updated: 2023/11/07 09:42:09 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;

	if ((dst == NULL || src == NULL) && size == 0)
		return (0);
	dest_len = ft_strlen(dst);
	if (size <= dest_len)
		return (size + ft_strlen(src));
	return (dest_len + ft_strlcpy(dst + dest_len, src, size - dest_len));
}
