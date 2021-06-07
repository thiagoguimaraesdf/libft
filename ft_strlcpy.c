/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:25:01 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 23:03:41 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	char	*_src;

	_src = (char *)src;
	i = 0;
	if (dst == NULL || src == NULL || size == 0)
		return (0);
	while (i < (int)size - 1 && *_src != '\0')
	{
		*(dst + i) = *_src;
		i++;
		_src++;
	}
	if (size > 0)
		*(dst + i) = '\0';
	while (*_src != '\0')
	{
		i++;
		_src++;
	}
	return ((size_t)i);
}
