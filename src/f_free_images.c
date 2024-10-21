/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_free_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 08:03:12 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 08:14:48 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// From Minilibx
int	mlx_destroy_image(void *mlx_ptr, void *img_ptr);

/* Free all six loaded images */
void	f_free_images(t_game *game)
{
	mlx_destroy_image(game->mlx_ptr, game->image.wall);
	mlx_destroy_image(game->mlx_ptr, game->image.background);
	mlx_destroy_image(game->mlx_ptr, game->image.collectible);
	mlx_destroy_image(game->mlx_ptr, game->image.exit_open);
	mlx_destroy_image(game->mlx_ptr, game->image.exit_closed);
	mlx_destroy_image(game->mlx_ptr, game->image.player);
}
