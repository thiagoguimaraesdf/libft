/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:05:18 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/20 09:05:18 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
	size_t i;
	
	i = 0;
    if (dest == NULL && src == NULL)
		return NULL;
	while (i < n)
	{
		if(*((char *)src + i) == c)
			return (dest + i + 1);
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return NULL;
}