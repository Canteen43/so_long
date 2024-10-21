/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_nbr_giv_char_2da.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:07:55 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 08:51:22 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/*Returns the occurences of the given char c in all the strings of the given
2D-array of chars.*/
int	f_nbr_giv_char_2da(char **tda, char c)
{
	int	count;
	int	row;
	int	col;

	if (tda == NULL)
		return (0);
	count = 0;
	row = 0;
	col = 0;
	while (tda[row])
	{
		while (tda[row][col])
		{
			if (tda[row][col] == c)
				count++;
			col++;
		}
		row++;
		col = 0;
	}
	return (count);
}
