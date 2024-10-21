/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_floodfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:26:41 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 08:46:26 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// From Libft
char	*ft_strchr(const char *s, int c);

/*Performs what I think is a floodfill of the map. It starts at a given
position (in my program exit). Then it edits the field and also calls itself
for all adjacent fields. It stops when it encounter fields that don't need work.
*/
void	f_floodfill(char **map, int row, int pos)
{
	if (ft_strchr("O1SK", map[row][pos]))
		return ;
	else if (map[row][pos] == 'P')
		map[row][pos] = 'S';
	else if (map[row][pos] == '0')
		map[row][pos] = 'O';
	else if (map[row][pos] == 'C')
		map[row][pos] = 'K';
	f_floodfill(map, row, pos + 1);
	f_floodfill(map, row, pos - 1);
	f_floodfill(map, row + 1, pos);
	f_floodfill(map, row - 1, pos);
}
