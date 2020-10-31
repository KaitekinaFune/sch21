#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

//#include "ex00/ft_strdup.c"
//#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
char		*change()
{
	char *dest;
	dest = "World";
	return (dest);
}
*/


int main (void)
{
	/*
	char *src = "Hello";
	char *dest;

	dest = ft_strdup(src);
	printf("Duplicate: %s\n", dest);
	free (dest);
	return (0);
	*/
	/*
	int *arr[10];
	int i = 0;

	int z = ft_ultimate_range(arr, 10, 15);

	printf("Size of range: %d\n", z);
	while (i <= 2)
	{
		printf("%d ", *arr[i++]);
	}
	*/

	int i = 0;
	int *arrr = NULL;
	
	int j = ft_ultimate_range(&arrr, 5, 15);

	while (i <= 10)
	{
		printf("%d ", arrr[i]);
		i++;
	}
	printf("Size of arrr: %d", j);

}