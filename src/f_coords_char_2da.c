/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_coords_char_2da.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:11:46 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/20 18:48:30 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/*Returns the coordinates of a given character in a 2D array.
Uses first occurence of char. Expects that char is in 2d array.*/
void f_coords_char_2da(char **tda, char c, int *row, int *col)
{
	*col = 0;
	*row = 0;
	while (tda[*row])
	{
		if (tda[*row][*col] == c)
			return ;
		if (tda[*row][*col + 1] == '\0')
		{
			*col = 0;
			(*row)++;
		}
		else
			(*col)++;
	}
}
