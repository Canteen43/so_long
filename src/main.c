/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:34:08 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/30 23:34:24 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
	char	*map_name;
	int		map_fd;
	char*	map_string;
	char	**map;

	if (argc > 2)
		ERROR;
	if (argc == 2)
		map_name = argv[1];
	else
		map_name = "default_map.ber";
	map_fd = open(map_name, O_RDONLY); // Need to check for errors
	map_string = f_readfile(map_fd);
	close(map_fd);
	if (map_string == NULL) // I could save this step if split accepted NULL
		ERROR;
	map = ft_split(map_string, '\n');
	if (map == NULL)
		ERROR;
	
	CHECK MAP;
	GAME starts;
	return (0);
}
