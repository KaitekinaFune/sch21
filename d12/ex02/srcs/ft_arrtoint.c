#include "../includes/ft.h"

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