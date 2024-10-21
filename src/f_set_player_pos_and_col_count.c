/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_set_player_pos_and_col_count.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 09:46:47 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 09:50:01 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/* Set player position and collectible count */
void	f_set_player_pos_and_col_count(t_game *game)
{
	f_coords_char_2da(game->map, 'S', &(game->player_position.row),
		&(game->player_position.col));
	game->map[game->player_position.row][game->player_position.col] = '0';
	game->collectible_count = f_nbr_giv_char_2da(game->map, 'K');
}
