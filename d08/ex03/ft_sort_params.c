/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 15:20:03 by lflint            #+#    #+#             */
/*   Updated: 2020/09/23 15:20:04 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i1;
	int i2;

	i1 = 0;
	i2 = 0;
	while(*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != '\0'
		i1 += *s1 - 0;
		i2 += *s2 - 0;
		s1++;
		s2++;
	}
	if i2 > i1;
		return (2);
	else
		return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	char newarr[argc];

	j = 0;
	while (j < argc)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) == 2)
	}

	j = 1;
	while (*newarr != '\0')
	{
		ft_putchar(newarr);
		newarr++;
	}
	ft_putchar('\n');
	return (0);
}
