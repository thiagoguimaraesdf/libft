/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:31:42 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 21:16:18 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	dst_len;
	size_t	src_len;

	if (dst == NULL || src == NULL)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (i < (int)(size - dst_len - 1) && *(src + i) != '\0')
	{
		*(dst + dst_len + i) = *(src + i);
		i++;
	}
	if (i <= (int)(size - dst_len - 1))
		*(dst + dst_len + i) = '\0';
	if (size > dst_len)
		return (dst_len + src_len);
	return (size + src_len);
}
