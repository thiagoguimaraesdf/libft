/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:28:11 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 22:21:05 by tguimara         ###   ########.fr       */
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

static	char	*ft_fillstr(char *tab, char *ptr, char c)
{
	while (*(ptr) != c && *(ptr) != '\0')
	{
		*tab = *ptr;
		ptr++;
		tab++;
	}
	*tab = '\0';
	return (ptr);
}

static char			**ft_malloc_error(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		wordcount;
	int		i;
	char	**tab;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	ptr = (char *)s;
	wordcount = ft_countwords(ptr, c);
	tab = (char **)malloc(sizeof(char *) * (wordcount + 1));
	i = 0;
	while (i < wordcount && tab)
	{
		while (*(ptr) == c && *(ptr) != '\0')
			ptr++;
		tab[i] = (char *)malloc(sizeof(char) * (ft_size((ptr), c) + 1));
		if (tab[i] == NULL)
			return (ft_malloc_error(tab));
		ptr = ft_fillstr(tab[i], ptr, c);
		while (*(ptr) == c && *(ptr) != '\0')
			ptr++;
		i++;
		wordcount--;
	}
	if (tab != NULL)
	{
		*tab = NULL;
		return (tab);
	}
	return (NULL);
}
