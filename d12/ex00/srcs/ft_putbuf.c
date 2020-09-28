#include "../includes/ft.h"

void	ft_putbuf(char *str, int n)
{
		write(1, str, n);
}