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
	int		file;
	int		ret;
	char	buf[BUF_SIZE];
	int		i;

	errno = 0;
	i = 1;
	while (i < argc)
	{
		file = open(argv[i], O_RDONLY);
		if (errno)
		{
			ft_putstr("ft_cat: ", argv[i], ": ", strerror(errno));
			ft_putchar('\n');
			errno = 0;
		}
		else
		{
			while ((ret = read(file, &buf, BUF_SIZE)) > 0 && !(errno))
				write(1, buf, ret);
		}
		i++;
	}
	close(file);
	return (0);
}
