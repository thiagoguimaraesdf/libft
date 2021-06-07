/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:44:51 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/07 17:25:38 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	
	if (s == NULL)
		return (NULL);
	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (*ptr == c % 256)
			return (ptr);
		ptr++;
	}
	if (*ptr == c % 256)
		return (ptr);
	return (NULL);
}
