/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 17:46:25 by lflint            #+#    #+#             */
/*   Updated: 2020/11/07 15:25:55 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_gnl
{
	int			done;
	int			reach;
	size_t		bytes;
	size_t		buf_size;
	size_t		line_length;
	char		*line;
	char		buf[BUFFER_SIZE];
}				t_gnl;

int				get_next_line(int fd, char **line);
void			*ft_memcpy(void *dest, const void *src, size_t n);

#endif
