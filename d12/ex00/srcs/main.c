/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:16:12 by lflint            #+#    #+#             */
/*   Updated: 2020/09/28 15:28:36 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		main(int argc, char **argv)
{
	int file;
	int ret;
	char buf[BUF_SIZE];

	if (argc < 2)
		return(ft_puterr(0));
	else if (argc > 2)
		return(ft_puterr(1));
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		return(ft_puterr(2));
	while ((ret = read(file, buf, BUF_SIZE)))
	{
		write(1, buf, ret);
	}
	close(file);
	return (0);
}
