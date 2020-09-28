#include "ft_stock_str.h"
#include <unistd.h>

struct	s_stock_str *ft_strs_to_tab(int ac, char **av);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb /= 10);
		ft_putchar('8');
		return ;
	}
	if (nb < 0)
	{
		nb = -(nb);
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
	if (nb < 10)
		ft_putchar(nb + 48);
}


void ft_show_tab(struct s_stock_str *par)
{
	ft_putstr(par->str);
	ft_putchar('\n');
	ft_putnbr(par->size);
	ft_putchar('\n');
	ft_putstr(par->copy);
	ft_putchar('\n');
}
