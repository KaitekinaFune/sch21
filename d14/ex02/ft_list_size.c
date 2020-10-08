#include "ft_list.h"
#include <stdio.h>

int		ft_list_size(t_list *begin_list)
{
	int i;

	i = 0;
	while(begin_list != NULL)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

int			main(void)
{
	t_list *a;

	a = ft_create_elem("Hello");

	printf("%d\n", ft_list_size(a));

	return (0);
}