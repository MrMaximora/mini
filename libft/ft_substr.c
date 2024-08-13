/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <derey@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:30:41 by derey             #+#    #+#             */
/*   Updated: 2024/07/09 15:47:25 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char const *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && str[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	x;
	char	*result;

	i = 0;
	x = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	result = ft_calloc(ft_len(s + start, len) + 1, sizeof(char));
	if (!result)
		return (NULL);
	while ((char)s[i] != '\0')
	{
		if (start <= i && x < len)
		{
			result[x] = s[i];
			x++;
		}
		i++;
	}
	result[x] = '\0';
	return (result);
}
