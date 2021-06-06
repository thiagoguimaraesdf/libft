/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 08:56:33 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/02 09:49:13 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../include/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst == NULL)
			ft_lstadd_front(lst, new);
		else
		{
			last = ft_lstlast(*lst);
			last->next = new;
			new->next = NULL;
		}
	}
}
