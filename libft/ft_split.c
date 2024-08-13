/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <derey@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:04:17 by derey             #+#    #+#             */
/*   Updated: 2024/07/15 15:23:58 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			len++;
		while (*s != c && *s)
			s++;
	}
	return (len);
}

static void	*ft_free(char **result, int i)
{
	while (i >= 0)
	{
		free(result[i]);
		i--;
	}
	free(result);
	return (NULL);
}

static char	**ft_loop(char const *s, char c, char **result)
{
	size_t	a;
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				a = ft_strlen(s);
			else
				a = ft_strchr(s, c) - s;
			result[i] = ft_substr(s, 0, a);
			if (!result[i])
				return (ft_free(result, i));
			i++;
			s = s + a;
		}
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	result = (char **)ft_calloc((ft_countword(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	result = ft_loop(s, c, result);
	return (result);
}
