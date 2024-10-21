/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_exit_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 08:00:06 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 09:20:20 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// From FLib
void	fl_free_split(char **ptr);
void	fl_miniprint(char *str, ...);

// From Minilibx
int		mlx_destroy_window(void *mlx_ptr, void *win_ptr);

void	f_exit_game(t_game *game)
{
	if (game->win_ptr)
		mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	f_free_images(game);
	if (game->map)
		fl_free_split(game->map);
	fl_miniprint("Exited and freed properly.\n");
	exit(0);
}
