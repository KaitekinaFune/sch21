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
	int		num;

	num = ft_arrtoint(argv[2]);
	i = 3;
	while (i < argc)
	{
		file = open(argv[i], O_RDWR);
		if (errno)
		{
			ft_putstr(basename(argv[0]), ": ", argv[i], ": ");
			ft_putstr2(strerror(errno));
			write(2, "\n", 1);
		}
		while ((ret = read(file, &buf, BUF_SIZE)) > 0 && !(errno))
		{
			write(1, &buf[ret - num], ret);
		}
		close(file);
		i++;
	}
}
