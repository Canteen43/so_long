/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_is_2da_surrounded.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:55:30 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/20 11:39:42 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/*Returns true if a given character surrounds a 2D array, false otherwise.*/
bool f_is_2da_surrounded(char **tda, char c)
{
	int line_length;
	int row_nbr;
	int i;
	int j;

	if (tda == NULL)
		return (false);
	line_length = f_len_line_2da(tda);
	row_nbr = f_nbr_rows_2da(tda);
	i = 0;
	j = 0;
	while (j < row_nbr)
	{
		if (j == 0 || j == row_nbr - 1 || i == 0 || i == line_length - 1)
			if (tda[j][i] != c)
					return (false);
		if (i == line_length - 1)
		{
			i = 0;
			j++;
		}
		else
			i++;
	}
	return (true);
}
