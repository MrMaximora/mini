/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:12:24 by derey             #+#    #+#             */
/*   Updated: 2023/11/08 12:09:47 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	x;

	if (!lst)
		return (NULL);
	x = 0;
	i = ft_lstsize(lst);
	while (x < i)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
		x++;
	}
	return (lst);
}
