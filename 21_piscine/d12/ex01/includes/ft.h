/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:20:10 by lflint            #+#    #+#             */
/*   Updated: 2020/09/29 14:28:12 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUF_SIZE 28672

# include <unistd.h>
# include <libgen.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

void	ft_putstr(char *str, char *str2, char *str3, char *str4);
void	ft_putstr2(char *str);
void	ft_putchar(char c);
void	ft_display(int argc, char **argv);
void	ft_inf_input(void);

#endif
