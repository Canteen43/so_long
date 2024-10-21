/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_has_valid_path.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:56:40 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 08:47:03 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/*Floodfill algorithm to check if there is a valid path from P to E. That also
connects all Cs.*/
bool	f_has_valid_path(char **map)
{
	int	row;
	int	col;

	f_coords_char_2da(map, 'E', &row, &col);
	f_floodfill(map, row, col);
	if (f_is_2da_only_giv_chars(map, "0O1SEK") == false)
		return (false);
	return (true);
}
