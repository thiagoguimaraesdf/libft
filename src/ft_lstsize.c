/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 08:29:07 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/30 08:51:23 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	temp = lst;
	if (temp == NULL)
		return (0);
	i = 0;
	while (temp->next != NULL)
	{
		i++;
		temp = temp->next;
	}
	if (temp->next == NULL)
		i++;
	return (i);
}
