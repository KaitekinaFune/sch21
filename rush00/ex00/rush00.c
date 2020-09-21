/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoose <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 15:46:48 by bgoose            #+#    #+#             */
/*   Updated: 2020/09/20 21:14:48 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int ix;
	int iy;

	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			if ((ix == 1 && iy == 1) || (ix == x && iy == y))
				ft_putchar('o');
			else if ((ix == x && iy == 1) || (ix == 1 && iy == y))
				ft_putchar('o');
			else if ((ix == 1 && iy >= 2) || (ix == x && iy >= 2))
				ft_putchar('|');
			else if ((ix > 1 && iy > 1) && (ix < x && iy < y))
				ft_putchar(' ');
			else
				ft_putchar('-');
			ix++;
		}
		iy++;
		if (ix >= x)
			ft_putchar('\n');
	}
}
