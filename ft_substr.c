/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 08:53:45 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/07 22:17:08 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static char	*ft_substr_aux(size_t s_len, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	j;

	if (start > s_len)
		j = 0;
	else if (s_len - start < len)
		j = s_len - start;
	else
		j = len;
	ptr = ft_malloc(sizeof(char) * (j + 1));
	if (ptr != NULL)
		*(ptr + j) = 0;
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	ptr = ft_substr_aux(start, s_len, len);
	if (ptr == NULL)
		return (ptr);
	s_len = ft_strlen(s);
	i = 0;
	if (start <= ft_strlen(s))
	{
		while (i < len && *(s + start + i))
		{
			*(ptr + i) = *(s + start + i);
			i++;
		}
	}
	return (ptr);
}
