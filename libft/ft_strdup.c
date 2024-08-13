/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <derey@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:05:50 by derey             #+#    #+#             */
/*   Updated: 2024/08/08 09:36:14 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	ft_strcpy(dup, s);
	if (dup)
		return (dup);
	return (NULL);
}
