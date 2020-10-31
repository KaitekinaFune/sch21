/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <lflint@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 19:09:00 by lflint            #+#    #+#             */
/*   Updated: 2020/09/17 14:26:11 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	numb(int num)
{
	int a;
	int b;

	if (num > 10)
	{
		a = num / 10;
		b = num % 10;
		ft_putchar(a + 48);
		ft_putchar(b + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(num + 48);
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			numb(a);
			ft_putchar(' ');
			numb(b);
			if (a < 98 || b < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
