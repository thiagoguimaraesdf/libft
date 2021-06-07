/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:44:51 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 21:35:44 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
		return (NULL);
	while (*(s) != '\0')
	{
		if (*(s) == (char)c)
			return ((char *)s);
		s++;
	}
	if (*(s) == '\0' && (char)c == '\0')
		return ((char *)s);
	return (NULL);
}
