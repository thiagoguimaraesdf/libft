/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:31:42 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 23:57:21 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s_dst;
	size_t	s_src;

	i = 0;
	s_dst = ft_strlen(dst);
	s_src = ft_strlen(src);
	if (size <= s_dst)
		return (size + s_src);
	while (*(dst + i) != '\0')
		i++;
	while (*src && i < size - 1)
	{
		*(dst + i) = *(src);
		src++;
		i++;
	}
	*(dst + i) = '\0';
	return (s_dst + s_src);
}
