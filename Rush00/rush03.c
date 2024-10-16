/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:18:12 by danferna          #+#    #+#             */
/*   Updated: 2024/10/16 16:43:43 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print(int column, char car_a, char car_b, char car_c);

void	rush(int column, int row)
{
	int	counter;

	counter = 1;
	if (row >= 1 && column >= 1)
	{
		while (counter <= row)
		{
			if (counter == 1 || counter == row)
			{
				ft_print(column, 'A', 'B', 'C');
			}
			else
			{
				ft_print(column, 'B', ' ', 'B');
			}
			counter++;
		}
	}
	else
	{
		write(1, "Wrong Value\n", 12);
	}
}

void	ft_print(int column, char car_a, char car_b, char car_c)
{
	int	countertwo;

	countertwo = 1;
	while (countertwo <= column)
	{
		if (countertwo == 1)
		{
			ft_putchar(car_a);
		}
		else if (countertwo == column)
		{
			ft_putchar(car_c);
		}
		else
		{
			ft_putchar(car_b);
		}
		countertwo++;
	}
	ft_putchar('\n');
}
