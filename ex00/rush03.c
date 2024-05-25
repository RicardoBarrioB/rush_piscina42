/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarrio <rbarrio@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:58:56 by rbarrio           #+#    #+#             */
/*   Updated: 2024/05/25 16:59:03 by rbarrio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	aux(int a, int b, int x, int y)
{
	if ((b == 1 || b == y) && (a == 1 || a == x))
	{
		if (a == 1)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('C');
		}
	}
	else
	{
		if (a != 1 && a != x && b != 1 && b != y)
		{
			ft_putchar(' ');
		}
		else
		{
			ft_putchar('B');
		}
	}
}

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
			aux(a, b, x, y);
			a++;
		}
		ft_putchar('\n');
		a = 1;
		b++;
	}
}
