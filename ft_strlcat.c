/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:31:42 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 23:41:54 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	s_dst;
	size_t	s_src;

	count = 0;
	s_dst = ft_strlen(dst);
	s_src = ft_strlen(src);
	if (size <= s_dst)
		return (size + s_src);
	while (dst[count])
		count++;
	while (*src && count < size - 1)
		dst[count++] = *(src++);
	dst[count] = '\0';
	return (s_dst + s_src);
}
