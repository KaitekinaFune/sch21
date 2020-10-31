#include "ft_list.h"
#include <stdio.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	temp = ft_create_elem(data);
	temp->next = *begin_list;
	temp->data = data;
	*begin_list = temp;
}

int			main(void)
{
	t_list *a;

	a = ft_create_elem("Hello");
	a->next = ft_create_elem("World");
	a->next->next = ft_create_elem("Bye");

	printf("%s\n", a->data);

	printf("%s\n", a->next->data);

	printf("%s\n\n", a->next->next->data);

	ft_list_push_front(&a, "Bonjour");

	printf("%s\n", a->data);

	printf("%s\n", a->next->data);

	printf("%s\n", a->next->next->data);
	printf("%s\n", a->next->next->next->data);


	return (0);
}