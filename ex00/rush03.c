/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarrio <rbarrio@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:05:16 by rbarrio           #+#    #+#             */
/*   Updated: 2024/05/26 10:05:18 by rbarrio          ###   ########.fr       */
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
			if (a == 1 && (b == 1 || b == y))
				ft_putchar('A');
			else if (a == x && (b == 1 || b == y))
				ft_putchar('C');
			else if (a != 1 && a != x && b != 1 && b != y)
				ft_putchar(' ');
			else
				ft_putchar('B');
			a++;
		}
		ft_putchar('\n');
		a = 1;
		b++;
	}
}
