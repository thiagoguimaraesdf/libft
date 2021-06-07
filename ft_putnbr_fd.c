/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tguimara <tguimara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:22:57 by tguimara          #+#    #+#             */
/*   Updated: 2021/06/07 16:34:26 by tguimara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	l;

	l = n;
	if (l < 0)
	{
		write(fd, "-", 1);
		l = l * (-1);
	}
	if (l < 10)
	{
		ft_putchar_fd(l + '0', fd);
	}
	if (l >= 10)
	{
		ft_putnbr_fd(l / 10, fd);
		ft_putchar_fd((l % 10) + '0', fd);
	}
	return ;
}
