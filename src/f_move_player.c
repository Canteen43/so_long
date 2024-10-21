/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_move_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 11:14:00 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 10:11:54 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// From FLib
void	fl_miniprint(char *str, ...);

void	f_move_player(t_game *game, int row_diff, int col_diff)
{
	int	row_old;
	int	col_old;

	row_old = game->player_position.row;
	col_old = game->player_position.col;
	if (game->map[row_old + row_diff][col_old + col_diff] == '1')
		return ;
	game->player_position.row += row_diff;
	game->player_position.col += col_diff;
	if (game->map[game->player_position.row][game->player_position.col] == 'K')
	{
		game->collectible_count--;
		game->map[game->player_position.row][game->player_position.col] = '0';
		if (game->collectible_count == 0)
			f_open_exit(game);
	}
	f_print_tile(game, row_old, col_old);
	f_print_tile(game, row_old + row_diff, col_old + col_diff);
	game->move_count++;
	fl_miniprint("Move count: %d\n", game->move_count);
	if (game->map[game->player_position.row][game->player_position.col] == 'G')
		f_exit_game(game, "You're a winner!", 0);
}
