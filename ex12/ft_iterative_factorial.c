/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:14:48 by leotran           #+#    #+#             */
/*   Updated: 2021/10/28 17:52:39 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	num;

	i = 1;
	num = 1;
	if (nb < 0 || nb > 12)
		num = 0;
	else if (nb != 0)
	{
		while (i <= nb)
		{
			num *= i;
			i++;
		}
	}
	return (num);
}
