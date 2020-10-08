#include "ft_list.h"
#include <stdio.h>

t_list		*ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp == NULL)
		return (tmp);
	tmp->data = data;
	tmp->next = NULL;
	return (tmp);
}


int			main(void)
{
	t_list *a;

	a = ft_create_elem("EEEEEEEEEEEEEEEE\n");
	a->next = ft_create_elem("HELLO\n");
	a->next->next = ft_create_elem("zzzzz\n");
	printf("%s", a->data);
	printf("%p\n\n", a->next);

	printf("%s", a->next->data);
	printf("%p\n\n", a->next->next);

	printf("%s", a->next->next->data);
	printf("%p\n\n", a->next->next->next);
	return (0);
}
