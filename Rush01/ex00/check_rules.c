/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djunho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:48:46 by djunho            #+#    #+#             */
/*   Updated: 2024/09/15 19:33:19 by djunho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int	check_rule_row_right(char *table[], char *rule, int size, int row)
{
	int		i;
	char	view;
	char	bigger_building;

	view = '0';
	bigger_building = '0';
	i = size - 1;
	while (i >= 0)
	{
		if (table[row][i] > bigger_building)
		{
			bigger_building = table[row][i];
			view++;
		}
		i--;
	}
	if (view == rule[row])
	{
		return (1);
	}
	return (0);
}

int	check_rule_row_left(char *table[], char *rule, int size, int row)
{
	int		i;
	char	view;
	char	bigger_building;

	view = '0';
	bigger_building = '0';
	i = 0;
	while (i < size)
	{
		if (table[row][i] > bigger_building)
		{
			bigger_building = table[row][i];
			view++;
		}
		i++;
	}
	if (view == rule[row])
	{
		return (1);
	}
	return (0);
}

int	check_rule_col_down(char *table[], char *rule, int size, int col)
{
	int		i;
	char	view;
	char	bigger_building;

	view = '0';
	bigger_building = '0';
	i = size - 1;
	while (i >= 0)
	{
		if (table[i][col] > bigger_building)
		{
			bigger_building = table[i][col];
			view++;
		}
		i--;
	}
	if (view == rule[col])
	{
		return (1);
	}
	return (0);
}

int	check_rule_col_up(char *table[], char *rule, int size, int col)
{
	int		i;
	char	view;
	char	bigger_building;

	view = '0';
	bigger_building = '0';
	i = 0;
	while (i < size)
	{
		if (table[i][col] > bigger_building)
		{
			bigger_building = table[i][col];
			view++;
		}
		i++;
	}
	if (view == rule[col])
	{
		return (1);
	}
	return (0);
}

int	check_rules(struct s_game game)
{
	int	ret;
	int	i;

	i = 0;
	while (i < game.size)
	{
		ret = check_rule_col_up(game.table, game.rules[0], game.size, i);
		if (ret != 1)
			return (ret);
		ret = check_rule_col_down(game.table, game.rules[1], game.size, i);
		if (ret != 1)
			return (ret);
		ret = check_rule_row_left(game.table, game.rules[2], game.size, i);
		if (ret != 1)
			return (ret);
		ret = check_rule_row_right(game.table, game.rules[3], game.size, i);
		if (ret != 1)
			return (ret);
		i++;
	}
	return (1);
}
