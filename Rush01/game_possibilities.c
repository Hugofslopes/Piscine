/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_possibilities.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djunho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:51:01 by djunho            #+#    #+#             */
/*   Updated: 2024/09/15 19:56:16 by djunho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "game.h"

void	fill_possibilities(char *poss, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		poss[i] = '1' + i;
		i++;
	}
}

int	find_possibilities(char *poss, struct s_game game, int r, int c)
{
	int	i;
	int	num_pos;

	i = 0;
	num_pos = game.size;
	while (i < game.size)
	{
		if (game.table[r][i] != '*')
		{
			poss[game.table[r][i] - '1'] = '*';
			num_pos--;
		}
		i++;
	}
	i = 0;
	while (i < game.size)
	{
		if ((game.table[i][c] != '*') && (poss[game.table[i][c] - '1'] != '*'))
		{
			poss[game.table[i][c] - '1'] = '*';
			num_pos--;
		}
		i++;
	}
	return (num_pos);
}

// rules
// rules[0] -> col up
// rules[1] -> col down
// rules[2] -> row left
// rules[3] -> row right
int	create_possibilities(char **poss, struct s_game game, int row, int col)
{
	*poss = malloc(game.size * sizeof(char));
	fill_possibilities(*poss, game.size);
	return (find_possibilities(*poss, game, row, col));
}
