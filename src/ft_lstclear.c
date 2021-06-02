/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 09:20:24 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/02 09:49:07 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nextdel;

	nextdel = *lst;
	if (!lst || !del)
		return ;
	while (lst[0]->next != NULL)
	{
		nextdel = lst[0]->next;
		ft_lstdelone(lst[0], del);
		lst[0] = nextdel;
	}
	lst = NULL;
}
