/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_is_2da_rctngl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:29:37 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/17 08:18:25 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// From Libft
size_t	ft_strlen(const char *s);

/*Returns true if the given 2D-array of chars tda is a rectangle.
Returns false otherwise.*/
bool f_is_2da_rctngl(char **tda)
{
	size_t	line_length;
	int		row;

	if (tda == NULL)
		return (false);
	row = 0;
	line_length = ft_strlen(tda[0]);
	while (tda[row])
	{
		if (ft_strlen(tda[row]) != line_length)
			return (false);
		row++;
	}
	return (true);
}