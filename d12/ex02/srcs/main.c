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

# include <unistd.h>
# include <libgen.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <stdlib.h>

int		ft_arrtoint(char *str)
{
	int num;

	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num = 10 * num + (*str - 48);
		str++;
	}
	return (num);
}

int		main(int argc, char **argv)
{
	int n;
	int fd;
	char *buf;
	int ret;
	
	(void)argc;
	n = ft_arrtoint(argv[2]);
	buf = malloc(n * sizeof(char));
	fd = open(argv[3], O_RDWR);

	ret = read(fd, buf, n);
	write(1, &buf[ret-n], ret-n);
	return (0);
}
