/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:25:18 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/09/15 19:55:56 by djunho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "game.h"

void	create_game(struct s_game *game, int size)
{
	int	i;
	int	j;

	game->table = malloc(size * sizeof(char *));
	game->rules = malloc(4 * sizeof(char *));
	game->size = size;
	i = 0;
	while (i < 4)
	{
		game->rules[i++] = malloc(size * sizeof(char));
	}
	i = 0;
	while (i < size)
	{
		game->table[i] = malloc(size * sizeof(char));
		j = 0;
		while (j < size)
			game->table[i][j++] = '*';
		i++;
	}
}

void	free_game(struct s_game *game, int size)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(game->rules[i++]);
	}
	i = 0;
	while (i < size)
	{
		free(game->table[i++]);
	}
	free(game->rules);
	free(game->table);
}

int	process_game(struct s_game game)
{
	int		col;
	int		row;
	char	*possibilities;
	int		i;
	int		ret;

	if (find_empty(game, &row, &col) == 0)
		return (1);
	ret = 0;
	create_possibilities(&possibilities, game, row, col);
	i = 0;
	while (i < game.size)
	{
		if (possibilities[i++] == '*')
			continue ;
		game.table[row][col] = possibilities[i - 1];
		if ((process_game(game) == 1) && (check_rules(game) == 1))
		{
			ret = 1;
			break ;
		}
		game.table[row][col] = '*';
	}
	free(possibilities);
	return (ret);
}
