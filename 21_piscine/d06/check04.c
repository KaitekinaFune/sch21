//#include "ex00/ft_strlen.c"
//#include "ex01/ft_putstr.c"
//#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"

//#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
	// printf("%d", ft_strlen(""));     //ft_strlen

	//ft_putstr("Hello");				//ft_putstr

	/*
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(1000);
	printf("\n");
	ft_putnbr(1);
	printf("\n");						//ft_putnbr
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-100000);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	*/
	/*
	char *a = "9";
	char *b = "10";
	int ia = (*a - 48) + (*b - 48);
	printf("%d", ia);
	*/

	//printf("%d", atoi("asdasd1"));

	printf("%d", ft_atoi("  -----+++1231023213sdasd111"));



}