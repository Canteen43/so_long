/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_load_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:29:44 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/06 21:44:21 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
/*WIP: Needs to get the map-string, open file and apply split.*/
int f_load_map(t_game *game, int argc, char **argv)
{
	int map_fd;
	char *map_string;
	
	if (argc > 2)
		return (-1);
	if (argc == 2)
		game->map_name = argv[1];
	else
		game->map_name = "default_map.ber";
	map_fd = open(game->map_name, O_RDONLY); 
	if (map_fd == -1)
		return (-1);
	map_string = f_readfile(map_fd);
	if (close(map_fd) == -1)
		return (-1);
	if (map_string == NULL)
		return (-1);
	map = ft_split(map_string, '\n');
	if (map == NULL)
		return (-1);
	return (0);
}
