/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:43:02 by leotran           #+#    #+#             */
/*   Updated: 2021/10/28 18:20:37 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	num;

	i = 1;
	num = 1;
	if (nb < 0 || nb > 12)
		num = 0;
	else if (nb != 0)
	{
		num = nb * ft_recursive_factorial(nb - 1);
	}
	return (num);
}
