/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_len_line_2da.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:48:19 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/14 10:22:14 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

/*Returns the length of the first line in a 2D array.*/
int f_len_line_2da(char **tda)
{
	int line_length;

	line_length = 0;
	if (tda == NULL)
		return (0);
	if (tda[0] == NULL)
		return (0);
	while (tda[0][line_length])
		line_length++;
	return (line_length);
}