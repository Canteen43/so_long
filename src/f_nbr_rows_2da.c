/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_nbr_rows_2da.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:47:22 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/21 08:51:34 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/*Returns the number of rows in a 2D array.*/
int	f_nbr_rows_2da(char **tda)
{
	int	row_nbr;

	row_nbr = 0;
	if (tda == NULL)
		return (0);
	while (tda[row_nbr])
		row_nbr++;
	return (row_nbr);
}
