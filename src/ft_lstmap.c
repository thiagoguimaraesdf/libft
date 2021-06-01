/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 11:19:27 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/31 15:16:38 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/libft.h"

#include <unistd.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
			void (*del)(void *))
{
	t_list	*map_lst;
	
	map_lst = malloc(sizeof(lst));
	while (lst->next != NULL)
	{
		write(1, "a", 1);
		if (map_lst->content != NULL)
			del(map_lst);
		write(1, "b", 1);
		map_lst->content = f(lst);
		write(1, "c", 1);
		map_lst = map_lst->next;
		lst = lst->next;
	}
	write(1, "e", 1);
	return (map_lst);
}
