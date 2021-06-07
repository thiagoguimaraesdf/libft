/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:44:51 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 17:22:48 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (c % 256))
			return ((char *)s + i);
		i++;
	}
	if (*(s + i) == '\0' && (char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}
