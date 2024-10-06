/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:54:37 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/03 16:15:51 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <fcntl.h>      // For open() and O_* constants
#include <unistd.h>     // For read() and close()

# ifndef SPRITE_HEIGHT
#  define SPRITE_HEIGHT 32
# endif

# ifndef SPRITE_WIDTH
#  define SPRITE_WIDTH 32
# endif

struct s_loaded_images
{
	void*	collectible;
	void*	player;
	void*	background;
	void*	wall;
	void*	exit_open;
	void*	exit_closed;
};

typedef struct s_game_data
{
	char					*map_name;
	int						map_fd;
	char					*map_string;
	char					**map;
	void					*mlx_ptr;
	void					*win_ptr;
	struct s_loaded_images	*image;
}	t_game;



#endif // SO_LONG_H