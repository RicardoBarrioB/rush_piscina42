/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarrio <rbarrio@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:04:45 by rbarrio           #+#    #+#             */
/*   Updated: 2024/05/26 14:29:29 by rbarrio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == y))
				ft_putchar('/');
			else if ((a == 1 && b == y) || (a == x && b == 1))
				ft_putchar('\\');
			else if (a != 1 && a != x && b != 1 && b != y)
				ft_putchar(' ');
			else
				ft_putchar('*');
			a++;
		}
		ft_putchar('\n');
		a = 1;
		b++;
	}
}
