/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:27:16 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/29 10:32:52 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../include/libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int     i;
    char    *ptr;

    ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
    if (ptr == NULL)
        return (NULL);
    i = 0;
    while(*(s + i) != '\0')
    {
        *(ptr + i) = f(i, *(s + i));
        i++;
    }
    *(ptr + i) = '\0';
    return (ptr);
}
