//#include "ex00/ft_strcpy.c"
//#include "ex01/ft_strncpy.c"
//#include "ex02/ft_str_is_alpha.c"
//#include "ex03/ft_str_is_numeric.c"
//#include "ex04/ft_str_is_lowercase.c"
//#include "ex05/ft_str_is_uppercase.c"
//#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include <unistd.h>
#include <stdio.h>

void	strprnt(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int     main(void)
{
    /*
    char *a = "Hello";
    char dst[100];
    char *dest;                                 //ft_strcpy
    dest = dst;
    ft_strcpy(dest, a);
    strprnt(dest);
    */

    

    
    //char *a = "HelloWorld";
    /*
    char dst[20];
    char *dest;                                 //ft_strncpy
    dest = dst;
    ft_strncpy(dest, "HelloWorld", 15);
    printf("%s", dest);
    */
    
    /*
    int a = ft_str_is_alpha("");
    int b = ft_str_is_alpha("asdas_");
    int c = ft_str_is_alpha("asdDas");          //ft_str_is_alpha
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    */

    /*
    int a = ft_str_is_numeric("");
    int b = ft_str_is_numeric("091241");
    int c = ft_str_is_numeric("0a0asd221a");          //ft_str_is_numeric
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    */
    
    /*
    int a = ft_str_is_lowercase("");
    int b = ft_str_is_lowercase("asdasdasdasd");
    int c = ft_str_is_lowercase("asdaAasA");
    int d = ft_str_is_lowercase("asda123");          //ft_str_is_lowercase
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    */

    /*
    int a = ft_str_is_uppercase("");
    int b = ft_str_is_uppercase("ASDASDA");
    int c = ft_str_is_uppercase("asdaAasA");
    int d = ft_str_is_uppercase("asda123");          //ft_str_is_uppercase
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    */
    
    /*
    int a = ft_str_is_printable("");
    int b = ft_str_is_printable("aaa\rasss3");
    int c = ft_str_is_printable("asd\nAasA");
    int d = ft_str_is_printable("asd");          //ft_str_is_printable
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    */

    char *c = "asdasd13123___ZXCASD";
    ft_strupcase(c);
    printf("%s", c);
    




    


    
    

    
    
    




}