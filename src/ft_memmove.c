/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:08:39 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/25 22:34:13 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (dest < src)
	{
		i = 0;
		while ((size_t)i < n)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			*((char *)dest + i) = *((char *)src + i);
			i--;
		}
	}
	return (dest);
}
