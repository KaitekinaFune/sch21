SRCS	=	srcs/main.c srcs/print_error.c srcs/map_checks.c srcs/map_assigns.c srcs/build_grid.c srcs/find_solution.c srcs/utils.c
NAME	=	BSQ
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