/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_open_exit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:51:26 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/20 18:56:48 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// WIP, Remove this later
void	fl_miniprint(char *str, ...);

/*Opens the exit by changing the map character from 'E' to 'G'.*/
void	f_open_exit(t_game *game)
{
	int row;
	int col;

	f_coords_char_2da(game->map, 'E', &row, &col);
	game->map[row][col] = 'G';
	f_print_tile(game, row, col);
}
