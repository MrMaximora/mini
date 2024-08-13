/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:37:25 by derey             #+#    #+#             */
/*   Updated: 2023/11/07 09:46:19 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		x;
	int		a;

	i = 0;
	if (!*little || little[i] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[i] != '\0' && i != len)
	{
		x = 0;
		a = i;
		while (big[i] == little[x] && big[i] && i != len)
		{
			i++;
			x++;
		}
		if (little[x] == '\0')
			return ((char *)&big[i - x]);
		i = a;
		i++;
	}
	return (NULL);
}
