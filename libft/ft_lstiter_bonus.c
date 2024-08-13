/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:30:13 by derey             #+#    #+#             */
/*   Updated: 2023/11/14 12:30:00 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	int		i;
	int		x;

	if (!f || !lst)
		return ;
	x = 0;
	if (lst == NULL)
		return ;
	i = ft_lstsize(lst);
	while (x < i)
	{
		(f)((lst->content));
		lst = lst->next;
		x++;
	}
}
