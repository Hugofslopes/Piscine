/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:18:12 by danferna          #+#    #+#             */
/*   Updated: 2024/10/16 16:43:50 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print(int column, char car_a, char car_b);

void	rush(int column, int row)
{
	int	counter;

	counter = 1;
	if (row >= 1 && column >= 1)
	{
		while (counter <= row)
		{
			if (counter == 1)
				ft_print(column, 'A', 'B');
			else if (counter == row)
				ft_print(column, 'C', 'B');
			else
				ft_print(column, 'B', ' ');
			counter++;
		}
	}
	else
	{
		write(1, "Wrong Value\n", 12);
	}
}

void	ft_print(int column, char car_a, char car_b)
{
	int	countertwo;

	countertwo = 1;
	while (countertwo <= column)
	{
		if (countertwo == 1 || countertwo == column)
		{
			ft_putchar(car_a);
		}
		else
		{
			ft_putchar(car_b);
		}
		countertwo++;
	}
	ft_putchar('\n');
}
