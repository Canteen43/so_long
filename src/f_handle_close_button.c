/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_handle_close_button.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 08:24:31 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 09:19:45 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// From FLib
void	fl_miniprint(char *str, ...);

/*Handles the close button of the window. Exits the game.*/
int	f_handle_close_button(void *param)
{
	t_game	*game;

	game = (t_game *)param;
	fl_miniprint("Game ended with close button\n");
	f_exit_game(game);
	return (0);
}
