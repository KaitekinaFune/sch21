#include "../includes/ft.h"

int		dir_parse(int i)
{
	int fd;
	(void)i;

	if ((fd = open(DIR, O_RDONLY)) < 0)
	{
		write(2, "Dict Error\n", 11);
		return (-1);
	}
	return (fd);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_valid(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
			if (str[i] < '0' || str[i] > '9')
				return (1);
		i++;
	}
	return (0);
}