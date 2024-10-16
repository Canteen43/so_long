/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_has_valid_path.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:56:40 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/14 10:22:31 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/*Floodfill algorithm to check if there is a valid path from P to E. That also
connects all Cs.*/
bool f_has_valid_path(char **map)
{
	int row;
	int pos;

	f_coords_char_2da(map, 'E', &pos, &row);
	f_floodfill(map, row, pos);
	if (f_is_2da_only_giv_chars(map, "0O1SEK") == false)
		return (false);
	return (true);
}
