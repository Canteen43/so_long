/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:34:08 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/15 18:15:26 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// From MinilibX
void	*mlx_init();
void	*mlx_new_window(void *mlx_ptr, int size_x, int size_y, char *title);
int		mlx_loop (void *mlx_ptr);

// WIP, Remove this later
void	fl_miniprint(char *str, ...);

int main(int argc, char **argv)
{
	t_game	game;

	if (f_load_map(&game, argc, argv) == -1)
	{
		fl_miniprint("Error f_load_map\n");
		return (-1); // Revisit error handling
	}
	if (f_is_map_valid(game.map) == false)
	{
		fl_miniprint("Error f_is_map_valid\n");
		return (-1); // Revisit error handling
	}
	game.mlx_ptr = mlx_init();
	if (game.mlx_ptr == NULL)
	{
		fl_miniprint("Error mlx_init\n");
		return (-1); // Revisit error handling
	}
	game.window_width = SPRITE_WIDTH * f_len_line_2da(game.map);
	game.window_height = SPRITE_HEIGHT * f_nbr_rows_2da(game.map);
    game.win_ptr = mlx_new_window(game.mlx_ptr, game.window_width,
	 game.window_height, "So Long");
	if (game.win_ptr == NULL)
	{
		fl_miniprint("Error mlx_new_window\n");
		return (-1); // Revisit error handling
	}
	if (f_load_images(&game) == -1)
	{
		fl_miniprint("Error f_load_images\n");
		return (-1); // Revisit error handling
	}
	f_print_map(&game);
    mlx_loop(game.mlx_ptr);
	// At exit: free split, destroy images, ...
	return (0);
}
