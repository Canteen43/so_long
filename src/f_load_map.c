/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_load_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:29:44 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/16 07:49:47 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// From Flib
char	*fl_readfile(int fd);
void	fl_str_switch_chr(char *str, char old, char new);

// From Libft
char	**ft_split(char const *s, char c);

/*WIP: Should I keep the argc part?.*/
int f_load_map(t_game *game, int argc, char **argv)
{
	int map_fd;
	char *map_string;
	
	if (argc > 2)
		return (-1);
	if (argc == 2)
		game->map_name = argv[1];
	else
		game->map_name = "../assets/maps/valid/default_map.ber";
	map_fd = open(game->map_name, O_RDONLY); 
	if (map_fd == -1)
		return (-1);
	map_string = fl_readfile(map_fd);
	if (close(map_fd) == -1)
		return (-1);
	if (map_string == NULL)
		return (-1);
	fl_str_switch_chr(map_string, '\r', '\n');
	game->map = ft_split(map_string, '\n');
	if (game->map == NULL)
		return (-1);
	return (0);
}
