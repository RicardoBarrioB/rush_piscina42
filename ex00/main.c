/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarrio <rbarrio@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:57:47 by rbarrio           #+#    #+#             */
/*   Updated: 2024/05/26 14:02:12 by rbarrio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc == 3)
	{
		x = number_transform(argv[1]);
		y = number_transform(argv[2]);
		rush(x, y);
	}
	else
		rush(5, 4);
	return (0);
}

int	number_transform(char *num)
{
	int	z;
	int	i;

	z = 0;
	i = 0;
	while (num[i] != '\0')
	{
		if (num[i] >= '0' && num[i] <= '9')
			z = z * 10 + (num[i] - '0');
		i++;
	}
	return (z);
}
