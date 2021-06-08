/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 08:53:45 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/07 22:43:17 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static char	*ft_secure_malloc(char *ptr, size_t start)
{
	if (start > s_len)
		ptr = NULL;
	else if (len > s_len - start)
		ptr = malloc(sizeof(char) * (s_len - start + 1));
	else
		ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	unsigned int	s_len;
	char			*ptr;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	ptr = ft_secure_malloc(ptr, start);
	if (ptr == NULL)
		return (NULL);
	j = 0;
	while (len > 0 && s[start] != '\0')
	{
		ptr[j] = s[start];
		j++;
		start++;
		len--;
	}
	ptr[j] = '\0';
	return (ptr);
}
