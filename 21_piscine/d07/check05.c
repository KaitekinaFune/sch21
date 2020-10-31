#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
//#include "ex05/ft_sqrt.c"
//#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_iterative_factorial(5));				//ft_iterative_factorial

	printf("%d\n\n", ft_recursive_factorial(0));				//ft_recursive_factorial

	printf("%d\n", ft_iterative_power(4, 0));					//ft_iterative_power

	printf("%d\n\n", ft_recursive_power(2, 1));					//ft_recursive_power

	
	printf("%d\n", ft_fibonacci(-1));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));							//ft_fibonacci
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n\n\n", ft_fibonacci(10));							//34
	
	
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(4));									//ft_sqrt
	printf("%d\n", ft_sqrt(-123123));
	printf("%d\n\n\n\n", ft_sqrt(345067776));							//431
													
	/*
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(1));								//ft_is_prime
	printf("%d\n", ft_is_prime(2147483647));
	printf("%d\n", ft_is_prime(997));
	printf("%d\n\n\n", ft_is_prime(2));
	*/		
	
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(169));
	printf("%d\n", ft_find_next_prime(173));
	printf("%d\n", ft_find_next_prime(2147483646));




}