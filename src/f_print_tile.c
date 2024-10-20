/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_print_tile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:46:32 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/20 18:12:43 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// From Minilibx
int	mlx_put_image_to_window(void *mlx_ptr, void *win_ptr, void *img_ptr,
				int x, int y);

// WIP, Remove this later
void	fl_miniprint(char *str, ...);

// From Libft
char	*ft_strchr(const char *s, int c);


/*Prints tile at specified map position by checking map at that spot.
Does not return because it only calls function which itself does not return on 
error.*/
void f_print_tile(t_game *game, int row, int col)
{
	char	tile;
	void	*img_ptr;

	tile = game->map[row][col];
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
	 game->image.background, SPRITE_WIDTH * col, SPRITE_HEIGHT * row);
	img_ptr = NULL;
	if (tile == '1')
		img_ptr = game->image.wall;
	else if (tile == 'K')
		img_ptr = game->image.collectible;
	else if (tile == 'E')
		img_ptr = game->image.exit_closed;
	else if (tile == 'G')
		img_ptr = game->image.exit_open;
	if (ft_strchr("1KEG", tile))
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, img_ptr,
		 SPRITE_WIDTH * col, SPRITE_HEIGHT * row);
	if (row == game->player_position.row && col == game->player_position.col)
		mlx_put_image_to_window(game->mlx_ptr, game->win_ptr, game->image.player,
	 SPRITE_WIDTH * col, SPRITE_HEIGHT * row);
}
