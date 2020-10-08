#include "ft_list.h"
#include <stdio.h>

t_list *ft_list_last(t_list *begin_list)
{
	while(begin_list->next != NULL)
		begin_list = begin_list->next;
	return(begin_list);
}

int         main(void)
{
    t_list *a;
	t_list *b;

	
    a = ft_create_elem("Hello");
    a->next = ft_create_elem("World");
    a->next->next = ft_create_elem("Bye");
	b = ft_list_last(a);
    printf("%s\n", b->data);
	printf("%s\n\n", a->data);
	printf("%p\n", b->next);
	printf("%p\n\n", a->next);
    return (0);
}