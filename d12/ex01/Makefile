SRCS	=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/main.c
NAME	=	ft_cat
CFLAGS	=	-Wall -Wextra -Werror
INCL	=	includes/ft.h	
CC		=	gcc
RM		=	rm -rf
OBJS	=	$(SRCS:.c=.o)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS) $(INCL)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean		
			$(RM) $(NAME)
