/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:28:11 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 21:43:05 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static	int	ft_countwords(char const *s, char c)
{
	int		words;
	int		i;
	char	*p;
	char	sep[2];

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

static	int	ft_size(char const *s, char c)
{
	int	size;

	size = 0;
	while (*(s + size) != '\0' && *(s + size) != c)
		size++;
	return (size);
}

static	int	ft_fillstr(char **tab, char const *s, int i, char c)
{
	int	k;

	k = 0;
	while (*(s + i) != c && *(s + i) != '\0')
	{
		*(*(tab) + k) = *(s + i);
		i++;
		k++;
	}
	*(*(tab) + k) = '\0';
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		wordcount;
	char	**tab;
	char	*ptr;

	ptr = (char *)s;
	if (ptr == NULL)
		return (NULL);
	wordcount = ft_countwords(ptr, c);
	tab = (char **)malloc(sizeof(char *) * (wordcount + 1));
	i = 0;
	j = 0;
	while (j < wordcount && tab)
	{
		while (*(ptr + i) == c && *(ptr + i) != '\0')
			i++;
		*tab = (char *)malloc(sizeof(char) * (ft_size((ptr + i), c) + 1));
		while (*(ptr + i) == c && *(ptr + i) != '\0')
			i++;
		i = ft_fillstr(tab, ptr, i, c);
		tab++;
		j++;
	}
	*tab = NULL;
	return (tab - wordcount);
}
