/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:21:04 by derey             #+#    #+#             */
/*   Updated: 2023/11/08 12:10:45 by derey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *news)
{
	t_list	*tmp;

	if (!lst || !news)
		return ;
	if (lst)
	{
		if (*lst == NULL)
			*lst = news;
		else
		{
			tmp = ft_lstlast(*lst);
			tmp->next = news;
		}
	}
}
