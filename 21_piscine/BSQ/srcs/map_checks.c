/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_checks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 23:34:14 by lflint            #+#    #+#             */
/*   Updated: 2020/10/07 23:34:15 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

t_bool	check_chars(t_map *map)
{
	int i;

	i = 0;
	while (map->file[i] != '\0')
	{
		if (map->file[i] != map->signs[0]
		&& map->file[i] != map->signs[1]
		&& map->file[i] != map->signs[2]
		&& map->file[i] != '\n')
			return (FALSE);
		i++;
	}
	return (check_cols(map));
}

t_bool	check_cols(t_map *map)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (map->file[i] != '\n')
	{
		i++;
		map->c++;
	}
	i++;
	while (map->file[i] != '\0')
	{
		while (map->file[i] != '\n')
		{
			c++;
			i++;
		}
		if (c != map->c)
			return (FALSE);
		c = 0;
		i++;
	}
	return (check_signs(map));
}

t_bool	check_signs(t_map *map)
{
	if (map->signs[0] == map->signs[1]
	|| map->signs[0] == map->signs[2]
	|| map->signs[1] == map->signs[2])
		return (FALSE);
	return (TRUE);
}
