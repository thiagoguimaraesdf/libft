/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 09:16:15 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/29 16:20:12 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../include/libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int     i;
    int     j;
    size_t  s1_len;
    size_t  s2_len;
    char    *ptr;
    
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    ptr = malloc(s1_len + s2_len + 1);
    i = 0;
    while (*(s1 + i) != '\0')
    {
        *(ptr + i) = *(s1 + i);
        i++;
    }
    j = 0;
    while (*(s2 + j) != '\0')
    {
        *(ptr + i + j) = *(s2 + j);
        j++;
    }
    *(ptr + i + j) = '\0';
    return (ptr);
}
