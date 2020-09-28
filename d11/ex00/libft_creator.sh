rm -rf *.o
rm -f libft.a

gcc -c ft_strcmp.c
gcc -c ft_putchar.c
gcc -c ft_swap.c
gcc -c ft_putstr.c
gcc -c ft_strlen.c

ar rc libft.a ft_strcmp.o ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o

rm -rf *.o

