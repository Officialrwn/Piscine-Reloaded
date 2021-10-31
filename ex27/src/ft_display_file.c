/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 22:17:49 by leotran           #+#    #+#             */
/*   Updated: 2021/10/31 01:18:18 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_display_file(char *argv)
{
	int		fd;
	char	buf[2];

	fd = open(argv, O_RDONLY);
	if (fd != -1)
	{
		while (read(fd, buf, 1))
		{
			ft_putchar(buf[0]);
		}
		if (close(fd) == -1)
			ft_putstr("Failed to close file.");
	}
	else
		ft_putstr("Failed to open file.");
	return (1);
}
