/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 12:04:12 by jode-mat          #+#    #+#             */
/*   Updated: 2024/09/15 19:39:38 by djunho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	fill_col(char *table[], int col, int size)
{
	int		i;
	char	c;

	c = '1';
	i = 0;
	while (i < size)
	{
		table[i][col] = c;
		c++;
		i++;
	}
}

void	fill_row(char *table[], int row, int size)
{
	int		i;
	char	c;

	c = '1';
	i = 0;
	while (i < size)
	{
		table[row][i] = c;
		c++;
		i++;
	}
}

int	find_empty(struct s_game game, int *row, int *col)
{
	*col = 0;
	*row = 0;
	while (*row < game.size)
	{
		while (*col < game.size)
		{
			if (game.table[*row][*col] == '*')
			{
				return (1);
			}
			(*col)++;
		}
		(*row)++;
		*col = 0;
	}
	if ((*col >= game.size) || (*row >= game.size))
		return (0);
	return (1);
}
