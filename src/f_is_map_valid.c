/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_is_map_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:27:24 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/30 23:34:21 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

int is_map_valid(char **map)
{
	int line_length;
	int row_nbr;
	bool p_found;
	bool e_found;
	bool c_found;

	if (map == NULL)
		return (0);
	row_nbr = 0;
	p_found = false;
	e_found = false;
	c_found = false;
	while (*map)
	{
		if (*map == NULL)
			return (0);
		line_length = ft_strlen(*map);
		while (**map)
		{
			if (ft_strlen(*map) != line_length)
				return (0);

			if (**map != '1' && **map != '0' && **map != 'P' && **map != 'E')
				return (0);
			(*map)++;
		}
		row_nbr++;
		map++;
	}
}


bool is_map_valid(char **map)
{
	if (map == NULL)
		return (false);
	if (f_is_2da_only_giv_chars(map, "01PEC") == false)
		return (false);`
	if (f_char_nbr_2darr(map, 'P') != 1 || f_char_nbr_2darr(map, 'E') != 1 
	|| f_char_nbr_2darr(map, 'C') < 1)
		return (false);
	if (f_is_2da_rctngl(map) == false)
		return (false);
}