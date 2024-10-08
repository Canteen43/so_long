/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_nbr_giv_char_2da.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:07:55 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/30 23:19:12 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns the occurences of the given char c in all the strings of the given
2D-array of chars.*/
int f_nbr_giv_char_2da(char **tda, char c)
{
	int count;

`	if (tda == NULL)
		return (0);
	count = 0;
	while (*tda)
	{
		while (**tda)
		{
			if (**tda == c)
				count++;
			(*tda)++;
		}
		tda++;
	}
	return (count);
}