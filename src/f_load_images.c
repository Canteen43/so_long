/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_load_images.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:17:38 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 10:32:14 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// From MinilibX
void	*mlx_xpm_file_to_image(void *mlx_ptr, char *filename,
			int	*width, int	*height);

// From Libft
char	*ft_strjoin(char const *s1, char const *s2);

/*Helper function for f_load_images. Loads an image from a file and saves its
pointer to the image pointer passed as argument. Returns 0 on success and -1
on failure.*/
static int	f_helper(t_game *game, void **image, char *filepath)
{
	int	dummy1;
	int	dummy2;

	filepath = ft_strjoin("assets/sprites/", filepath);
	*image = mlx_xpm_file_to_image(game->mlx_ptr, filepath, &dummy1, &dummy2);
	free(filepath);
	if (*image == NULL)
		return (-1);
	return (0);
}

/*Loads six predefined images and saves their pointers to game struct.
Returns 0 on success and -1 on failure.*/
int	f_load_images(t_game *game)
{
	if (f_helper(game, &(game->image.collectible), "collectible.xpm") == -1
		|| f_helper(game, &(game->image.player), "player.xpm") == -1
		|| f_helper(game, &(game->image.background), "background.xpm") == -1
		|| f_helper(game, &(game->image.wall), "wall.xpm") == -1
		|| f_helper(game, &(game->image.exit_open), "exit_open.xpm") == -1
		|| f_helper(game, &(game->image.exit_closed), "exit_closed.xpm") == -1)
		return (-1);
	return (0);
}

// WIP: I need to think about whether I am passing the image pointer correctly.
// Also I need to think about how I handle the path to the image file.