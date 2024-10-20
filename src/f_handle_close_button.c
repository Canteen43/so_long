/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_handle_close_button.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 08:24:31 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 09:25:16 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/*Handles the close button of the window. Exits the game.*/
int	f_handle_close_button(void *param)
{
	t_game	*game;

	game = (t_game *)param;
	f_exit_game(game, "Game ended with close button.", 0);
	return (0);
}
