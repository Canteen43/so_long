/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_game_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 09:40:06 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 09:57:16 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/* Initialize important game variables to NULL or 0 */
void	f_game_init(t_game *game)
{
	game->map = NULL;
	game->mlx_ptr = NULL;
	game->win_ptr = NULL;
	game->image.collectible = NULL;
	game->image.exit_open = NULL;
	game->image.exit_closed = NULL;
	game->image.background = NULL;
	game->image.player = NULL;
	game->image.wall = NULL;
	game->move_count = 0;
}
