/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:43:03 by leotran           #+#    #+#             */
/*   Updated: 2021/10/31 01:09:09 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.");
		ft_putchar('\n');
	}
	if (argc == 2)
		ft_display_file(argv[1]);
	if (argc > 2)
	{
		ft_putstr("Too many arguments.");
		ft_putchar('\n');
	}
	return (0);
}
