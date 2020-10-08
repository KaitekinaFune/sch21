/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 14:26:40 by lflint            #+#    #+#             */
/*   Updated: 2020/09/29 14:27:04 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_display(int argc, char **argv)
{
	int		file;
	char	buf[BUF_SIZE];
	int		ret;
	int		i;

	i = 1;
	while (i < argc)
	{
		if ((file = open(argv[i], O_RDWR)) < 0 && errno)
		{
			ft_putstr(basename(argv[0]), ": ", argv[i], ": ");
			ft_putstr2(strerror(errno));
			write(2, "\n", 1);
		}
		while ((ret = read(file, &buf, BUF_SIZE)) > 0)
			write(1, buf, ret);
		close(file);
		i++;
	}
}
