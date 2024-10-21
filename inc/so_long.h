/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:54:37 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 08:58:30 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>		// For open() and O_* constants
# include <unistd.h>		// For read() and close()
# include <stdbool.h>	// For true and	false
# include <stdlib.h>		// For size_t
# include <X11/keysym.h>	// For keycodes

# ifndef SPRITE_HEIGHT
#  define SPRITE_HEIGHT 32
# endif

# ifndef SPRITE_WIDTH
#  define SPRITE_WIDTH 32
# endif

struct s_loaded_images
{
	void	*collectible;
	void	*player;
	void	*background;
	void	*wall;
	void	*exit_open;
	void	*exit_closed;
};

struct s_player_position
{
	int	row;
	int	col;
};

typedef struct s_game_data
{
	char						*map_name;
	int							map_fd;
	char						*map_string;
	char						**map;
	void						*mlx_ptr;
	void						*win_ptr;
	struct s_loaded_images		image;
	int							window_width;
	int							window_height;
	int							move_count;
	struct s_player_position	player_position;
	int							collectible_count;
}	t_game;

// Function declarations
int		f_len_line_2da(char **array);
int		f_load_images(t_game *game);
int		f_load_map(t_game *game, int argc, char **argv);
int		f_nbr_giv_char_2da(char **array, char c);
int		f_nbr_rows_2da(char **array);
int		f_handle_key_press(int keycode, void *param);
int		f_handle_close_button(void *param);
bool	f_has_valid_path(char **map);
bool	f_is_2da_only_giv_chars(char **array, char *valid_chars);
bool	f_is_2da_rctngl(char **array);
bool	f_is_map_valid(char **map);
bool	f_is_2da_surrounded(char **tda, char c);
void	f_coords_char_2da(char **tda, char c, int *pos, int *row);
void	f_floodfill(char **map, int row, int pos);
void	f_print_map(t_game *game);
void	f_print_tile(t_game *game, int row, int col);
void	f_move_player(t_game *game, int row_diff, int col_diff);
void	f_open_exit(t_game *game);
void	f_exit_game(t_game *game);
void	f_free_images(t_game *game);

#endif // SO_LONG_H