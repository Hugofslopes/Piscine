/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_prepare.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djunho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:05:50 by djunho            #+#    #+#             */
/*   Updated: 2024/09/15 21:06:59 by djunho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	apply_certain_one(struct s_game game)
{
	int	i;

	i = 0;
	while (i < game.size)
	{
		if (game.rules[0][i] == '1')
			game.table[0][i] = '0' + game.size;
		if (game.rules[1][i] == '1')
			game.table[game.size - 1][i] = '0' + game.size;
		if (game.rules[2][i] == '1')
			game.table[i][0] = '0' + game.size;
		if (game.rules[3][i] == '1')
			game.table[i][game.size - 1] = '0' + game.size;
		i++;
	}
}

void	apply_certain_size_col(struct s_game game, int i)
{
	int	j;
	int	rule;

	rule = 0;
	while (rule < 2)
	{
		if (game.rules[rule][i] == '0' + game.size)
		{
			j = 0;
			while (j < game.size)
			{
				game.table[j][i] = '1' + ((rule == 0) * j) + \
					((rule == 1) * (game.size - 1 - j));
				j++;
			}
		}
		rule++;
	}
}

void	apply_certain_size_row(struct s_game game, int i)
{
	int	j;
	int	rule;

	rule = 2;
	while (rule < 4)
	{
		if (game.rules[rule][i] == '0' + game.size)
		{
			j = 0;
			while (j < game.size)
			{
				game.table[i][j] = '1' + ((rule == 2) * j) + \
					((rule == 3) * (game.size - 1 - j));
				j++;
			}
		}
		rule++;
	}
}

void	apply_certain_size(struct s_game game)
{
	int	i;

	i = 0;
	while (i < game.size)
	{
		apply_certain_size_col(game, i);
		apply_certain_size_row(game, i);
		i++;
	}
}

void	apply_certain(struct s_game game)
{
	apply_certain_one(game);
	apply_certain_size(game);
}
