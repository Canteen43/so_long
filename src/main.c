/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:34:08 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/06 21:44:16 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{
	t_game	game;

	if (f_load_map(&game, map_name) == -1)
		ERROR;
	if (f_is_map_valid(game.map) == false)
		ERROR;
	game.mlx_ptr = mlx_init();   
    game.win_ptr = mlx_new_window(game.mlx_ptr, SPRITE_WIDTH * map_linelength,
	 SPRITE_HEIGHT * map_rownbr, "So Long");
	
    mlx_loop(game.mlx_ptr);


	FIRST GRAPHISCS OR FIRST INPUT HANDLING ?;
	GAME starts;
	return (0);
}
