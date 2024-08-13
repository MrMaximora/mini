/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:16:02 by derey             #+#    #+#             */
/*   Updated: 2023/11/08 16:08:02 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_trim_end(char const *s1, char const *set)
{
	int	i;
	int	a;

	i = 0;
	a = ft_strlen(s1) - 1;
	while (set[i] != '\0')
	{
		if (s1[a] != set[i])
			i++;
		if (s1[a] == set[i])
		{
			a--;
			i = 0;
		}
	}
	return (a);
}

static int	ft_trim_start(char const *s1, char const *set)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (set[i] != '\0')
	{
		if (s1[a] != set[i])
			i++;
		if (s1[a] == set[i])
		{
			a++;
			i = 0;
		}
	}
	return (a);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		end;
	size_t	all;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_trim_start(s1, set);
	end = ft_trim_end(s1, set);
	all = (end - start) + 1;
	if (ft_strlen(s1 + start) == 0)
	{
		result = malloc(sizeof(char));
		if (!result)
			return (NULL);
		result[0] = 0;
	}
	else
		result = (ft_substr(s1, start, all));
	if (!result)
		return (NULL);
	return (result);
}
