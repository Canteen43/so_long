/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kweihman <kweihman@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:34:08 by kweihman          #+#    #+#             */
/*   Updated: 2024/09/30 11:53:27 by kweihman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
	char *map_name;

	if (argc > 2)
		ERROR;
	if (argc == 2)
		map_name = argv[1];
	else
		map_name = "default_map.ber";
	READ MAP;
	SPLIT to 2D ARRAY;
	CHECK MAP;
	GAME starts;
	return (0);
}