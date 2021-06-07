/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:31:42 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 23:48:03 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= src_len)
		return (size + src_len);
	i = dst_len;
	while (*src && i < size - 1)
	{
		*(dst + i) = *src;
		src++;
		i++;
	}
	*(dst + i) = '\0';
	return (dst_len + src_len);
}
