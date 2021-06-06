/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:31:31 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 15:07:05 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "../include/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n = 0)
		return (0);
	while (i < n && *(s2 + i) != '\0' && *(s1 + i) != '\0')
	{
		if (*(s1 + i) == *(s2 + i))
			i++;
		else
			return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
	}
	return (0);
}
