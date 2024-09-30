/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_is_2da_rctngl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:29:37 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/30 23:33:50 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns true if the given 2D-array of chars tda is a rectangle.
Returns false otherwise.*/
bool f_is_2da_rctngl(char **tda)
{
	int line_length;

	if (tda == NULL)
		return (false);
	line_length = ft_strlen(*tda);
	while (*tda)
	{
		if (ft_strlen(*tda) != line_length)
			return (false);
		tda++;
	}
	return (true);
}