/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 12:59:15 by lflint            #+#    #+#             */
/*   Updated: 2020/09/20 20:26:39 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int ix;
	int iy;

	ix = 1;
	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			if ((ix == 1 && iy == 1) || (ix == x && iy == 1))
				ft_putchar('A');
			else if ((ix == 1 && iy == y) || (ix == x && iy == y))
				ft_putchar('C');
			else if ((ix >= 2 && iy >= 2) && (ix < x && iy < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			ix++;
		}
		if (ix >= x)
			ft_putchar('\n');
		iy++;
	}
}
