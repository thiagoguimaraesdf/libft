/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:31:31 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/21 14:31:31 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	size_t s2_len;
	
	s2_len = strlen(s2);
	i = 0;
	while (i < n)
	{
		if (*(s1 + i) == *(s2))
		{
			j = 0;
			while (*(s1 + i + j) == *(s2 + j) && *(s2 + j) != '\0')
				j++;
			if (j == s2_len)
				return(0); 
		}
		i++;
	}
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}