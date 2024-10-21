/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_is_map_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:27:24 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 08:48:23 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

bool	f_is_map_valid(char **map)
{
	if (map == NULL)
		return (false);
	if (f_is_2da_only_giv_chars(map, "01PEC") == false)
		return (false);
	if (f_nbr_giv_char_2da(map, 'P') != 1 || f_nbr_giv_char_2da(map, 'E') != 1
		|| f_nbr_giv_char_2da(map, 'C') < 1)
		return (false);
	if (f_is_2da_rctngl(map) == false)
		return (false);
	if (f_is_2da_surrounded(map, '1') == false)
		return (false);
	if (f_has_valid_path(map) == false)
		return (false);
	return (true);
}
