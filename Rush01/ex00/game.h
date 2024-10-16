/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djunho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:56:47 by djunho            #+#    #+#             */
/*   Updated: 2024/09/15 21:06:10 by djunho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

// rules
// rules[0] -> col up
// rules[1] -> col down
// rules[2] -> row left
// rules[3] -> row right
struct s_game
{
	char	**table;
	char	**rules;
	int		size;
};

int		process_game(struct s_game game);
int		find_empty(struct s_game game, int *row, int *col);
int		create_possibilities(char **poss, struct s_game game, int row, int col);
int		check_rules(struct s_game game);
void	create_game(struct s_game *game, int size);
void	free_game(struct s_game *game, int size);
void	apply_certain(struct s_game game);

#endif // GAME_H
