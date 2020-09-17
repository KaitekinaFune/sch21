/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <lflint@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:04:08 by lflint            #+#    #+#             */
/*   Updated: 2020/09/17 20:01:30 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_reverse(int a)
{
	int r;

	r = 0;
	while (a != 0)
	{
		r = r * 10;
		r = r + a % 10;
		a = a / 10;
	}
	if (r < 0)
	{
		ft_putchar('-');
		return (-r);
	}
	else
		return (r);
}

void	ft_putnbr(int nb)
{
	int b;

	b = ft_reverse(nb);
	if (nb < 10 && nb > -10)
		ft_putchar(b + 48);
	else
	{
		while (b > 99)
		{
			ft_putchar((b % 10) + 48);
			b /= 10;
		}
		ft_putchar((b % 10) + 48);
		ft_putchar((b / 10) + 48);
	}
}
