/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_load_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:17:38 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/15 07:36:45 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// From MinilibX
void	*mlx_xpm_file_to_image(void *mlx_ptr, char *filename,
			       int *width, int *height);

/*Loads six predefined images and saves their pointers to game struct.
Returns 0 on success and -1 on failure.*/
int f_load_images(t_game *game)
{
	game->image->collectible =
	 mlx_xpm_file_to_image(game->mlx_ptr, "collectible.xpm", NULL, NULL);
	if (game->image->collectible == NULL)
		return (-1);
	game->image->player =
	 mlx_xpm_file_to_image(game->mlx_ptr, "player.xpm", NULL, NULL);
	if (game->image->player == NULL)
		return (-1);
	game->image->background =
	 mlx_xpm_file_to_image(game->mlx_ptr, "background.xpm", NULL, NULL);
	if (game->image->background == NULL)
		return (-1);
	game->image->wall =
	 mlx_xpm_file_to_image(game->mlx_ptr, "wall.xpm", NULL, NULL);
	if (game->image->wall == NULL)
		return (-1);
	game->image->exit_open =
	 mlx_xpm_file_to_image(game->mlx_ptr, "exit_open.xpm", NULL, NULL);
	if (game->image->exit_open == NULL)
		return (-1);
	game->image->exit_closed =
	 mlx_xpm_file_to_image(game->mlx_ptr, "exit_closed.xpm", NULL, NULL);
	if (game->image->exit_closed == NULL)
		return (-1);
	return (0);
}
