/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_coords_char_2da.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:11:46 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/14 10:22:29 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/*Returns the coordinates of a given character in a 2D array.
Uses first occurence of char. Expects that char is in 2d array.*/
void f_coords_char_2da(char **tda, char c, int *pos, int *row)
{
	*pos = 0;
	*row = 0;
	while (tda[*row])
	{
		if (tda[*row][*pos] == c)
			return ;
		if (tda[*row][*pos + 1] == '\0')
		{
			*pos = 0;
			(*row)++;
		}
		else
			(*pos)++;
	}
}
