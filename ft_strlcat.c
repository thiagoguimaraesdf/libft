/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:31:42 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 23:37:13 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	char	*ptr;
	size_t	dst_len;
	size_t	src_len;

	ptr = (char *)src;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(ptr);
	i = 0;
	if (size <= 0)
		return (dst_len + src_len);
	while (i < (int)(size - dst_len - 1) && *(ptr + i) != '\0')
	{
		*(dst + dst_len + i) = *(ptr + i);
		i++;
	}
	if (i <= (int)(size - dst_len - 1))
		*(dst + dst_len + i) = '\0';
	if (size > dst_len)
		return (dst_len + src_len);
	return (size + src_len);
}
