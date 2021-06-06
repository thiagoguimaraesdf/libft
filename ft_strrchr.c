/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:46:50 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/25 23:51:50 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		ping;
	char	*res;

	i = 0;
	ping = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == (char)c)
		{
			res = ((char *)s + i);
			ping = 1;
		}
		i++;
	}
	if (ping == 1)
		return (res);
	else if ((char)c == '\0' && *(s + i) == '\0')
		return ((char *)s + i);
	return (NULL);
}
