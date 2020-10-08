/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 11:47:40 by lflint            #+#    #+#             */
/*   Updated: 2020/10/03 11:47:41 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define DIR "numbers.dict"
# define BUF_SIZE 28672

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		dir_parse(int i);
int		ft_strlen(char *str);
char	*ft_filetostr(int fd);
//int		ft_valid(char *str);

#endif