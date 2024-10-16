/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_floodfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:26:41 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/14 10:59:08 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void f_floodfill(char **map, int row, int pos)
{
	if (map[row][pos] == 'O')
		return ;
	if (map[row][pos] == '1')
		return ;
	if (map[row][pos] == 'P')
		map[row][pos] = 'S';
	if (map[row][pos] == '0')
		map[row][pos] = 'O';
	if (map[row][pos] == 'C')
		map[row][pos] = 'K';
	f_floodfill(map, row, pos + 1);
	f_floodfill(map, row, pos - 1);
	f_floodfill(map, row + 1, pos);
	f_floodfill(map, row - 1, pos);
}
