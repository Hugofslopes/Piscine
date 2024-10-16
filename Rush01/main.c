/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 08:58:16 by djunho            #+#    #+#             */
/*   Updated: 2024/09/15 21:02:52 by djunho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "game.h"

// Examples of possible inputs:
// Example: "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
// Example: "1 2 3 4 2 2 2 1 1 2 2 2 4 3 2 1"
// Example: "2 2 2 1 1 2 3 4 2 2 2 1 1 2 3 4"
// Example: "1 2 2 2 4 3 2 1 1 2 3 4 2 2 2 1"
// Example: "3 3 1 2 1 2 2 3 2 3 2 1 2 1 2 3"
// Example: "1 7 3 5 2 3 2 2 1 2 2 2 2 5 1 7 4 4 4 3 2 3 1 2 2 3 3 3"

// rules
// rules[0] -> col up
// rules[1] -> col down
// rules[2] -> row left
// rules[3] -> row right
void	process_rules(char *str, int size, char *rules[])
{
	int	rules_i;
	int	i;

	rules_i = 0;
	i = 0;
	while (*str != '\0')
	{
		while (*str == ' ')
			str++;
		if ((*str >= '0') && (*str <= '9'))
		{
			rules[rules_i][i] = *str;
			i++;
			if (i == size)
			{
				rules_i++;
				i = 0;
			}
		}
		str++;
	}
}

int	count_numbers(char *str)
{
	int	num_number;

	num_number = 0;
	while (*str != '\0')
	{
		while (*str == ' ')
			str++;
		if ((*str >= '0') && (*str <= '9'))
		{
			while ((*str >= '0') && (*str <= '9'))
				str++;
			if ((*str != ' ') && (*str != '\0'))
				return (-1);
			num_number++;
		}
		else if (*str != '\0')
		{
			return (-1);
		}
	}
	if ((num_number % 4) != 0)
		return (-1);
	return (num_number);
}

void	print_result(char *table[], int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, table[i++], size);
		write(1, "\n", 1);
	}
}

int	main(int argc, char *argv[])
{
	int				n;
	struct s_game	game;

	if ((argc != 2) || (count_numbers(argv[1]) < 1))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	n = count_numbers(argv[1]);
	n = n / 4;
	create_game(&game, n);
	process_rules(argv[1], n, game.rules);
	apply_certain(game);
	if (process_game(game) == 1)
	{
		print_result(game.table, n);
	}
	else
		write(1, "Error\n", 6);
	free_game(&game, n);
	return (0);
}
