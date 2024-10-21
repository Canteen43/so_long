/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:34:08 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 09:53:43 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"
#include "../lib/minilibx-linux/mlx.h"

// From MinilibX
void	*mlx_init(void);
void	*mlx_new_window(void *mlx_ptr, int size_x, int size_y, char *title);
int		mlx_loop(void *mlx_ptr);

// I cannot prototype the following functions because stupid norminette throws
// an error for too many args. So I had to include the header file.
// int		mlx_hook(t_win_list *win, int x_event, int x_mask, int (*funct)(),
// 			void *param);

// WIP, Remove this later
void	fl_miniprint(char *str, ...);

int	main(int argc, char **argv)
{
	t_game	game;

	f_game_init(&game);
	if (f_load_map(&game, argc, argv) == -1)
		f_exit_game(&game, "Loading map failed.", -1);
	if (f_is_map_valid(game.map) == false)
		f_exit_game(&game, "Map is invalid.", -1);
	f_set_player_pos_and_col_count(&game);
	game.mlx_ptr = mlx_init();
	if (game.mlx_ptr == NULL)
		f_exit_game(&game, "mlx_init() failed.", -1);
	game.window_width = SPRITE_WIDTH * f_len_line_2da(game.map);
	game.window_height = SPRITE_HEIGHT * f_nbr_rows_2da(game.map);
	game.win_ptr = mlx_new_window(game.mlx_ptr, game.window_width,
			game.window_height, "So Long");
	if (game.win_ptr == NULL)
		f_exit_game(&game, "mlx_new_window() failed.", -1);
	if (f_load_images(&game) == -1)
		f_exit_game(&game, "Loading images failed.", -1);
	f_print_map(&game);
	mlx_hook(game.win_ptr, 2, 1L << 0, f_handle_key_press, &game);
	mlx_hook(game.win_ptr, 17, 0, f_handle_close_button, &game);
	mlx_loop(game.mlx_ptr);
	return (0);
}
