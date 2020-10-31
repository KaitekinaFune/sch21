SRCS	=	srcs/ft_error.c srcs/main.c srcs/ft_calc.c srcs/ft_atoi.c srcs/ft_putnbr.c
NAME	=	do-op
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
re:			fclean all