/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 09:46:50 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/20 09:46:50 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int     i;
	char	*res;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			res = ((char *)s + i);
		i++;
	}
	if (*res)
		return res;
	return NULL;
}