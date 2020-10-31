/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:20:10 by lflint            #+#    #+#             */
/*   Updated: 2020/09/29 14:30:44 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>

# define BUF_SIZE 28672

int		ft_puterr(int n);
void	ft_putbuf(char *str, int n);

# define NO_FILE "File name missing.\n"
# define INV_ARGS "Too many arguments.\n"
# define INV_FILE "Cannot read file.\n"

#endif
