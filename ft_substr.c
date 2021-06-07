/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 08:53:45 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 23:52:48 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	j;
	unsigned int	s_len;
	char			*ptr;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	j = 0;
	if (start < s_len)
	{
		while (start < len && s[start] != '\0')
		{
			str[j] = s[start];
			j++;
			start++;
		}
	}
	str[j] = '\0';
	return (str);
}