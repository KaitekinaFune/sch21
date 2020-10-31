SRCS	=	srcs/main.c srcs/dir_parse.c srcs/ft_filetostr.c
NAME	=	rush-02
CFLAGS	=	-Wall -Wextra -Werror
INCL	=	includes/ft.h	
CC		=	gcc
RM		=	rm -rf
OBJS	=	$(SRCS:.c=.o)

.c.o:
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS) $(INCL)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean		
			$(RM) $(NAME)
re:			fclean all