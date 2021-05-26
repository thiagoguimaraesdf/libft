/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:16:15 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/26 09:26:53 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../include/libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  s1_len;
    size_t  s2_len;
    char    *ptr;
    
    s1_len = ft_strlen((char *)s1);
    s2_len = ft_strlen((char *)s2);
    ptr = malloc(s1_len + s2_len + 1);
    if (ptr == NULL)
        return (NULL);
    while (s2_len > 0)
    {
        *(ptr + s1_len + s2_len) = *(s2 + s2_len);
        s2_len--;
    }
    while (s1_len > 0)
    {
        *(ptr + s1_len) = *(s1 + s1_len);
        s1_len--;
    }
    return (ptr);
}
