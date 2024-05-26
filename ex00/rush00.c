/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarrio <rbarrio@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 10:04:35 by rbarrio           #+#    #+#             */
/*   Updated: 2024/05/26 13:30:57 by cagullo          ###   ########.fr       */
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
			if ((a == 1 || a == x) && (b == 1 || b == y))
				ft_putchar('o');
			else if ((a != 1 && a != x) && (b == 1 || b == y))
				ft_putchar ('-');
			else if (b != 1 && b != y && (a == 1 || a == x))
				ft_putchar ('|');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		a = 1;
		b++;
	}
}	
