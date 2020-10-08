/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_assigns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 23:32:58 by lflint            #+#    #+#             */
/*   Updated: 2020/10/07 23:32:59 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

t_bool	ft_parsemap(t_map *map, int fd)
{
	int ret;

	map->file = malloc(BUF_SIZE);
	if (!(ret = read(fd, map->file, BUF_SIZE)))
		return (FALSE);
	else
		map->file[ret] = '\0';
	return (ft_assignchars(map));
}

t_bool	ft_assignchars(t_map *map)
{
	int i;
	int j;
	int z;

	i = 0;
	j = 0;
	z = 0;
	while (map->file[i] != '\n')
		i++;
	j = i - 4;
	while (++j < i)
	{
		map->signs[z] = map->file[j];
		z++;
	}
	map->signs[z] = '\0';
	return (ft_assignrows(map));
}

t_bool	ft_assignrows(t_map *map)
{
	int i;
	int j;

	map->rows = 0;
	i = 0;
	j = 0;
	while (map->file[i] != '\n')
		i++;
	while (j <= (i - 4))
	{
		map->rows = map->rows * 10 + (map->file[j] - 48);
		j++;
	}
	map->file += i + 1;
	return (count_rows(map));
}

t_bool	count_rows(t_map *map)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (map->file[i] != '\0')
	{
		if (map->file[i] == '\n')
			count++;
		i++;
	}
	if (count != map->rows)
		return (FALSE);
	else
		return (check_chars(map));
}
