/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_handle_key_press.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:52:41 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 09:29:23 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/*Handles the key press events. Exits the game with escape key.*/
int	f_handle_key_press(int keycode, void *param)
{
	t_game	*game;

	game = (t_game *)param;
	if (keycode == XK_Escape)
		f_exit_game(game, "Game ended with escape key.", 0);
	if (keycode == XK_w)
		f_move_player(game, -1, 0);
	if (keycode == XK_a)
		f_move_player(game, 0, -1);
	if (keycode == XK_s)
		f_move_player(game, 1, 0);
	if (keycode == XK_d)
		f_move_player(game, 0, 1);
	return (0);
}
