/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_print_tile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:46:32 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/03 16:04:59 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void f_print_tile(void *mlx_ptr, void *win_ptr, char **map, int row, int col)
{
	char	tile;
	int		x;
	int		y;

	tile = map[row][col];
	PUT BACKGROUND AT SPRITE_WIDTH * col, SPRITE_HEIGHT * row;
	if (tile == '1')
		IMAGE = WALL;
	if (tile == '0' || tile == 'O')
		IMAGE = FLOOR / NOTHING;
	if (tile == 'K')
		IMAGE = COLLECTIBLE;
	if (tile == 'E')
		IMAGE = EXIT_CLOSED;
	if (tile == 'G')
		IMAGE = EXIT_OPEN;
	if (tile == 'S')
		IMAGE = PLAYER;
	PUT IMAGE AT SPRITE_WIDTH * col, SPRITE_HEIGHT * row;
}