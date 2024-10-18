/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_is_2da_only_giv_chars.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 23:15:23 by kweihman          #+#    #+#             */
/*   Updated: 2024/10/18 18:08:38 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

// From Libft
char	*ft_strchr(const char *s, int c);

/*Returns 1 if all the strings of the given 2D-array tda of chars are made of
only the given characters giv_chars. Returns 0 otherwise.*/
bool f_is_2da_only_giv_chars(char **tda, char *giv_chars)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	if (tda == NULL)
		return (false);
	while (tda[i])
	{
		while (tda[i][j])
		{
			if (!ft_strchr(giv_chars, tda[i][j]))
				return (false);
			j++;
		}
		i++;
		j = 0;
	}
	return (true);
}
