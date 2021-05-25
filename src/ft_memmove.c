/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:08:39 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/20 09:08:39 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	temp[n];

	i = 0;
	while (i < n)
	{
		temp[i] = *((char *)src + i);
		*((char *)dest + i) = temp[i];
		i++; 
	}
	return dest;
}