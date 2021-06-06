/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:17:58 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/06 16:35:37 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		write(fd, (s + i), 1);
		i++;
	}
	write(fd, "\n", 1);
}
