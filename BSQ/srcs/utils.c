/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoose <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 23:14:40 by bgoose            #+#    #+#             */
/*   Updated: 2020/10/07 23:14:43 by bgoose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int **g_grid;

void	everything(t_map *map, t_sol *solution)
{
	build_map(map);
	build_grid(map);
	solution_grid(map);
	solution_loop(solution, map);
	insert_solution(map, solution);
	print_solution(map);
	free_mem(map);
}

void	free_mem(t_map *map)
{
	map->file = NULL;
	map->map = NULL;
	map->c = 0;
	map->rows = 0;
	map->signs[0] = '\0';
	free(map->file);
	free(map->map);
	free(g_grid);
}

char	*input(void)
{
	int		fd;
	char	buf;
	int		ret;

	fd = open("nice_try_lol", O_RDWR | O_TRUNC | O_CREAT, 0777);
	while ((ret = read(0, &buf, 1)))
	{
		write(fd, &buf, 1);
	}
	close(fd);
	return ("nice_try_lol");
}

int		args(t_map *map, t_sol *solution)
{
	int fd;

	if ((fd = open(input(), O_RDONLY)) == -1)
		print_error();
	else if ((ft_parsemap(map, fd)) == FALSE)
		print_error();
	else
		everything(map, solution);
	return (0);
}
