/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:28:11 by tguimara          #+#    #+#             */
/*   Updated: 2021/05/29 08:54:19 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "../include/libft.h"

static int  ft_countwords(char const *s, char c)
{
    int words;
    int i;
    char *p;
    char sep[2];

    sep[0] = c;
    sep[1] = '\0';
    p = ft_strtrim(s, sep);
    words = 0;
    if (*p == '\0')
        return (words);
    i = 1;
    while (*(p + i) != '\0')
    {
        if (*(p + i) != c && *(p + i - 1) == c)
            words++;
        i++;
    }
    return (words + 1);
}

static int ft_size(char const *s, char c)
{
    int size;
    size = 0;
    while (*(s + size) != '\0' && *(s + size) != c)
        size++;
    return (size);
}

static int  ft_fillstr(char **tab, char const *s, int i, int j, char c)
{
    int k;

    k = 0;
    while(*(s + i) != c && *(s + i) != '\0')
    {
        *(*(tab + j) + k) = *(s + i);
        i++;
        k++;
    }
    return (i);
}

char    **ft_split(char const *s, char c)
{
    int     i;
    int     j;
    int     wordcount;
    char	**tab;

    wordcount = ft_countwords(s, c);
    tab = (char **)malloc(sizeof(char *) * (wordcount + 1));
    i = 0;
    j = 0;
    while (j < wordcount)
    {
        tab[j] = (char *)malloc(sizeof(char) * ft_size((s + i), c) + 1);
        while(*(s + i) == c && *(s + i) != '\0')
		    i++;
        i = ft_fillstr(tab, s, i, j, c);
    	while(*(s + i) == c && *(s + i) != '\0')
		    i++;
	    j++;
    }
    tab[j] = NULL;
    return (tab);
}
