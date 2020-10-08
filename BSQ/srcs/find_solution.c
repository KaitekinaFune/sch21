/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoose <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 23:07:40 by bgoose            #+#    #+#             */
/*   Updated: 2020/10/07 23:07:42 by bgoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int **g_grid;

int			find_max(int i, int j, t_sol *solution, t_map *map)
{
	int count;
	int min;

	if (g_grid[i][j] > solution->max)
	{
		count = 0;
		min = g_grid[i][j];
		while (i < map->rows && g_grid[i + count][j] > count && count < min)
		{
			min = (g_grid[i + count][j] < min ? g_grid[i + count][j] : min);
			count++;
		}
		g_grid[i][j] = count;
		return (count);
	}
	else
		return (0);
}

void		solution_loop(t_sol *solution, t_map *map)
{
	int max_temp;
	int i;
	int j;

	solution->max = 0;
	solution->x = 0;
	solution->y = 0;
	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < map->c)
		{
			max_temp = find_max(i, j, solution, map);
			if (max_temp > solution->max)
			{
				solution->max = max_temp;
				solution->x = j;
				solution->y = i;
			}
			j++;
		}
		i++;
	}
}

void		print_solution(t_map *map)
{
	int i;

	i = 0;
	while (i < map->rows)
	{
		write(1, map->map[i], map->c + 1);
		i++;
	}
}

void		insert_solution(t_map *map, t_sol *solution)
{
	int i;
	int j;
	int count_i;
	int count_j;

	if (map->rows == 1 && map->c == 1 && map->map[0][0] == map->signs[0])
		map->map[0][0] = map->signs[2];
	else
	{
		j = solution->x;
		i = solution->y;
		count_i = 0;
		while (i < map->rows && count_i++ < solution->max)
		{
			j = solution->x;
			count_j = 0;
			while (j < map->c && count_j++ < solution->max)
			{
				map->map[i][j] = map->signs[2];
				j++;
			}
			i++;
		}
	}
}

void		solution_grid(t_map *map)
{
	int i;
	int j;

	i = map->rows - 1;
	j = map->c - 1;
	while (i >= 0)
	{
		j = map->c - 1;
		while (j >= 0)
		{
			if (g_grid[i][j] == 0)
				j--;
			else
			{
				g_grid[i][j] = g_grid[i][j + 1] + 1;
				j--;
			}
		}
		i--;
	}
}
