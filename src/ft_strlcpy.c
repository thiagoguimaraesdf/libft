/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:25:01 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/25 22:58:08 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (i < (int)size - 1 && *(src + i) != '\0')
	{
		*(dst + i) = *(src + i);
		i++;
	}
	if (size > 0)
		*(dst + i) = '\0';
	while (*(src + i) != '\0')
		i++;
	return ((size_t)i);
}
