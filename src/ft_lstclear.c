/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 09:20:24 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/30 14:46:17 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nextdel;

	nextdel = *lst;
	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		nextdel = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = nextdel;
	}
	lst = NULL;
}
