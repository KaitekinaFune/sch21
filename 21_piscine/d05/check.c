#include <unistd.h>
#include <stdio.h>
#include <string.h>

//#include "ex00/ft_strcmp.c"
//#include "ex01/ft_strncmp.c"
//#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
//#include "ex04/ft_strstr.c"
//#include "ex05/ft_strlcat.c"


int		main(void)
{
	/*	
	//char *a = "\0";
	//char *b = "\200";			
	int i = ft_strcmp("hellz", "hello");		//ft_strcmp
	int j = strcmp("hellz", "hello");
	printf("%d\n", i);
	printf("%d\n", j);
	*/
	
	
	

	/*
	char a[] = "\200";
	char b[] = "\0";
	int size = 40;
	int i = ft_strncmp(a, b, size);		//ft_strncmp
	int j = strncmp(a, b, size);
	printf("%d\n", i);
	printf("%d\n", j);
	*/

	/*
	char *ptra;
	//char *ptrb;
	char a[100] = "hello";
	//char b[100] = "hello";			//ft_strcat
	
	ptra = a;
	//ptrb = b;
	ft_strcat(ptra, "world");
	//strcat(ptrb, "world");
	printf("%s\n", ptra);
	//printf("%s\n", ptrb);
	*/

	
	char *ptra;
	char *ptrb;
	char a[100] = "hello";
	char b[100] = "hello";			//ft_strncat
	
	ptra = a;
	ptrb = b;
	ft_strncat(ptra, "wo", 4);
	strncat(ptrb, "wo", 4);
	printf("%s\n", ptra);
	printf("%s\n", ptrb);
	
	

	/*
	char *ptra;
	char *ptrb;
	char a[100] = "hello, this is my first string";
	char b[100] = "hello, this is my first string";						//ft_strstr

	ptra = a;
	ptrb = b;
	printf("%s\n", ft_strstr(ptra, "first"));
	printf("%s\n", strstr(ptrb, "first"));
	*/
	
	
	
	/*
	char *ptra;
	char *ptrb;
	char a[100] = "Hello";
	char b[100] = "Hello";			//ft_strlcat
	ptra = a;
	ptrb = b;
	int i = ft_strlcat(ptra, "world", 7);
	int j = strlcat(ptrb, "world", 7);
	printf("%s\n", a);
	printf("%d\n", i);

	printf("%s\n", b);
	printf("%d\n", j);
*/
}