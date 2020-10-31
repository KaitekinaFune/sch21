#include "ft_list.h"
#include <stdio.h>

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list *temp;

	if (size == 0 || strs == NULL)
		return (0);
	temp = ft_create_elem(strs[size - 1]);
	temp->next = ft_list_push_strs(size - 1, strs);
	return (temp);
}

int			main(int argc, char **argv)
{
	t_list *a;

	a = ft_list_push_strs(argc, argv);
 
	while(a != NULL)
	{
		printf("%s\n", a->data);
		a = a->next;
	}
	return (0);
}
