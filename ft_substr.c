/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 08:53:45 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 23:08:34 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;
	char	*_s;

	_s = (char *)s;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL || _s == NULL)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(_s))
	{
		*(ptr + i) = *(_s + start);
		i++;
		start++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
