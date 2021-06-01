/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 11:19:27 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/01 16:26:33 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
			void (*del)(void *))
{
	t_list	*new_lst;

	new_lst = malloc(sizeof(t_list) * ft_lstsize(lst));
	if (lst == NULL || del == NULL || f == NULL)
		return (NULL);
	else if (new_lst == NULL)
	{
		ft_lstdelone(new_lst, del);
		return (NULL);
	}
	while (lst->next != NULL)
	{
		new_lst->content = f(lst->content);
		new_lst->next = lst->next;
		new_lst = new_lst->next;
		lst = lst->next;
	}
	new_lst->content = f(lst->content);
	new_lst->next = NULL;
	return(new_lst);
}
