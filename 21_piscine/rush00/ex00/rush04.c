/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lflint <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 20:31:52 by lflint            #+#    #+#             */
/*   Updated: 2020/09/20 20:33:24 by lflint           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, int y)
{
	int ix;
	int iy;

	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			if ((ix == x && iy == 1) || (ix == 1 && iy == y))
				ft_putchar('C');
			else if ((ix == 1 && iy == 1) || (ix == x && iy == y))
				ft_putchar('A');
			else if ((ix > 1 && iy > 1) && (ix < x && iy < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			ix++;
		}
		iy++;
		if (ix >= x)
			ft_putchar('\n');  
	}
}

void	ft_printx(y)
{
	int iy;

	iy = 1;
	while(iy <= y)
		{
			if(iy == 1)
				ft_putchar('A');
			else if(iy == y)
				ft_putchar('C');
			else
				ft_putchar('B');
			ft_putchar('\n');
			iy++;
		}
}

void	ft_printy(x)
{
	int ix;

	ix = 1;
	while(ix <= x)
		{
			if(ix == 1)
				ft_putchar('A');
			else if(ix == x)
				ft_putchar('C');
			else
				ft_putchar('B');
			ix++;
		}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 1 && y > 1)
		ft_print(x, y);
	else if (x == 1)
		ft_printx(y);
	else if (y == 1)
		ft_printy(x);
}
