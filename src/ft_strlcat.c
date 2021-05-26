/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:31:42 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/20 09:31:42 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../include/libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = strlen(dst);
	src_len = strlen(src);
	i = 0;
	if (size > dst_len)
	{
		while (i < size - dst_len - 1 && *(src + i) != '\0')
		{
			*(dst + dst_len + i) = *(src + i);
			i++;
		}
		*(dst + dst_len + i) = '\0';
		return (dst_len + src_len);
	}
	return (src_len + size);
}
