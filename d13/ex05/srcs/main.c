/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:36:31 by lflint            #+#    #+#             */
/*   Updated: 2020/09/30 16:57:44 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		ft_do_math(int a, int b, char op)
{
	int (*p[5])(int, int);

	p[0] = sum;
	p[1] = sub;
	p[2] = mul;
	p[3] = div;
	p[4] = mod;
	if (op == '+')
		return (p[0](a, b));
	else if (op == '-')
		return (p[1](a, b));
	else if (op == '*')
		return (p[2](a, b));
	else if (op == '/')
		return (p[3](a, b));
	else if (op == '%')
		return (p[4](a, b));
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;
	char	c;

	if (argc == 1)
		return (0);
	if (argc > 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	c = argv[2][0];
	if (argv[2][1])
		return (ft_error(0));
	if (b == 0 && c == '/')
		return (ft_error(1));
	if (b == 0 && c == '%')
		return (ft_error(2));
	ft_putnbr(ft_do_math(a, b, c));
	ft_putchar('\n');
	return (0);
}
