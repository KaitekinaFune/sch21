/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 11:47:47 by lflint            #+#    #+#             */
/*   Updated: 2020/10/07 23:10:10 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int **g_grid;

int			main(int argc, char **argv)
{
	int		fd;
	t_map	map;
	t_sol	solution;
	int		i;
	char	*map_name;

	if (argc == 1)
		return (args(&map, &solution));
	i = 1;
	while (i < argc)
	{
		map_name = argv[i];
		if ((fd = open(map_name, O_RDONLY)) == -1)
			print_error();
		else if ((ft_parsemap(&map, fd)) == FALSE)
			print_error();
		else
			everything(&map, &solution);
		if (i < argc && argc != 2)
			write(1, "\n", 1);
		close(fd);
		i++;
	}
	return (0);
}
