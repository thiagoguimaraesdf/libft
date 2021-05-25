/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:42:51 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/21 14:42:51 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../include/libft.h"

char *ft_strdup(const char *s)
{
	char *ptr;
	size_t s_len;

	s_len = ft_strlen(s);
	ptr = malloc(s_len);
	if (ptr == NULL)
		return NULL;
	else
		ft_strlcpy(ptr, s, s_len);
	return (ptr);	
}