/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 11:47:40 by lflint            #+#    #+#             */
/*   Updated: 2020/10/07 23:07:36 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUF_SIZE 1000000000

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct		s_map
{
	int				c;
	int				rows;
	char			*file;
	char			**map;
	char			signs[3];
}					t_map;

typedef struct		s_sol
{
	int				x;
	int				y;
	int				max;
}					t_sol;

typedef enum		e_bool
{
	FALSE,
	TRUE
}					t_bool;

int					print_error(void);
t_bool				ft_assignchars(t_map *map);
t_bool				ft_assignrows(t_map *map);
t_bool				ft_parsemap(t_map *map, int fd);
t_bool				count_rows(t_map *map);
t_bool				check_chars(t_map *map);
t_bool				check_cols(t_map *map);
t_bool				check_signs(t_map *map);
void				build_map(t_map *map);
void				build_grid(t_map *map);
void				solution_loop(t_sol *solution, t_map *map);
int					find_max(int i, int j, t_sol *solution, t_map *map);
void				free_mem(t_map *map);
int					args(t_map *map, t_sol *solution);
char				*input(void);
void				print_solution(t_map *map);
void				insert_solution(t_map *map, t_sol *solution);
void				solution_grid(t_map *map);
void				everything(t_map *map, t_sol *solution);

#endif
