/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leotran <leotran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:54:17 by leotran           #+#    #+#             */
/*   Updated: 2021/10/29 13:02:53 by leotran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s1[i] == s2[i])
		i++;
	if (s1[i] != '\0' || s2[i] != '\0')
		res = s1[i] - s2[i];
	return (res);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			j = -1;
			while (argv[i][++j])
				ft_putchar(argv[i][j]);
			ft_putchar('\n');
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	num;
	int	sort;

	num = 0;
	sort = 0;
	while (sort != 1)
	{
		i = 0;
		sort = 1;
		while (++i + 1 < argc)
		{
			num = ft_strcmp(argv[i], argv[i + 1]);
			if (num > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				sort = 0;
			}
		}
	}
	ft_print_params(argc, argv);
	return (0);
}
