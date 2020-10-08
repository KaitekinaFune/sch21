/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoose <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 23:05:38 by bgoose            #+#    #+#             */
/*   Updated: 2020/10/07 23:05:42 by bgoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int **g_grid;

void		build_grid(t_map *map)
{
	int i;
	int j;

	i = 0;
	g_grid = malloc((sizeof(int *) * map->rows) * (sizeof(int) * map->c));
	g_grid[0] = malloc(sizeof(int) * map->c);
	while (i < map->rows)
	{
		j = 0;
		while (j < map->c)
		{
			if (map->map[i][j] == map->signs[0])
				g_grid[i][j] = 1;
			else if (map->map[i][j] == map->signs[1])
				g_grid[i][j] = 0;
			j++;
		}
		i++;
		g_grid[i] = malloc(sizeof(int) * map->c);
	}
}

void		build_map(t_map *map)
{
	int j;
	int z;
	int h;

	h = 0;
	j = 0;
	z = 0;
	map->map = malloc(sizeof(char *) * (map->rows * (sizeof(char)) * (map->c)));
	map->map[0] = malloc(sizeof(char) * map->c);
	while (map->file[h] != '\0')
	{
		while (map->file[h] != '\n')
		{
			map->map[z][j] = map->file[h];
			j++;
			h++;
		}
		map->map[z][j] = '\n';
		z++;
		map->map[z] = malloc(sizeof(char) * map->c);
		j = 0;
		h++;
	}
}
