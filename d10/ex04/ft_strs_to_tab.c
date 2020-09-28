#include "ft_stock_str.h"
#include <stdlib.h>

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	
	ac += 0;
	struct s_stock_str *tab;
	tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (tab == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].size = ft_strlen(av[i]);
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i] = (struct s_stock_str){0, 0, 0};
	return (tab);
}
